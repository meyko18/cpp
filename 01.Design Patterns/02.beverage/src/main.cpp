#include <iostream>

// Beverage 基类，定义制作饮料的一般步骤
class Beverage {
public:
    // 模板方法
    void prepareBeverage() {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }

    virtual ~Beverage() {}

protected:
    void boilWater() {
        std::cout << "Boiling water." << std::endl;
    }

    virtual void brew() = 0;  // 纯虚函数

    void pourInCup() {
        std::cout << "Pouring into cup." << std::endl;
    }

    virtual void addCondiments() = 0;  // 纯虚函数
};

// Tea 子类
class Tea : public Beverage {
protected:
    void brew() override {
        std::cout << "Steeping the tea." << std::endl;
    }

    void addCondiments() override {
        std::cout << "Adding lemon." << std::endl;
    }
};

// Coffee 子类
class Coffee : public Beverage {
protected:
    void brew() override {
        std::cout << "Dripping coffee through filter." << std::endl;
    }

    void addCondiments() override {
        std::cout << "Adding sugar and milk." << std::endl;
    }
};

int main() {
    Beverage* tea = new Tea();
    Beverage* coffee = new Coffee();

    std::cout << "Making tea:" << std::endl;
    tea->prepareBeverage();

    std::cout << "\nMaking coffee:" << std::endl;
    coffee->prepareBeverage();

    delete tea;
    delete coffee;

    return 0;
}
