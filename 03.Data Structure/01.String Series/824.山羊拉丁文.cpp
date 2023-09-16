/*
 * @lc app=leetcode.cn id=824 lang=cpp
 *
 * [824] 山羊拉丁文
 */

// @lc code=start
class Solution {
public:
    string toGoatLatin(string sentence) {
        //元音字母
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        //用空格分割字符串
        stringstream ss(sentence);
        string word;
        string res = "";
        int count = 1;
        while (getline(ss, word, ' '))
        {
            if(vowels.count(word[0]) == 0)
            {
                word = word.substr(1) + word[0];
            }
            word = word + "ma";
            word.append(count, 'a');
            count++;
            res += word + " ";
        }
        return res.substr(0, res.size() - 1);
        
    }
};
// @lc code=end

