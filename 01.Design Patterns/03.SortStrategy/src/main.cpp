#include <iostream>
#include <vector>
#include <algorithm>

// 排序策略接口
class SortStrategy {
public:
    virtual ~SortStrategy() {}
    virtual void sort(std::vector<int>& data) = 0;
};

// 冒泡排序策略
class BubbleSortStrategy : public SortStrategy {
public:
    void sort(std::vector<int>& data) override {
        int n = data.size();
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (data[j] > data[j+1]) {
                    std::swap(data[j], data[j+1]);
                }
            }
        }
    }
};

// 快速排序策略
class QuickSortStrategy : public SortStrategy {
public:
    void sort(std::vector<int>& data) override {
        std::sort(data.begin(), data.end());
    }
};

// 上下文
class Context {
private:
    SortStrategy* strategy;
public:
    Context(SortStrategy* strategy) : strategy(strategy) {}
    void setStrategy(SortStrategy* newStrategy) {
        strategy = newStrategy;
    }
    void executeStrategy(std::vector<int>& data) {
        strategy->sort(data);
    }
};

int main() {
    std::vector<int> data = {5, 2, 9, 1, 5, 6};

    Context context(new BubbleSortStrategy());
    context.executeStrategy(data);

    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    data = {5, 2, 9, 1, 5, 6};
    context.setStrategy(new QuickSortStrategy());
    context.executeStrategy(data);

    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
