/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include <map>
#include <string>
#include <iostream>
class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int res = 0;
        std::map<char, int> dict;
        int count = 0;
        int begin = 0;
        int i = 0;
        for (i = 0; i < s.length(); i++) {
            char c = s[i];
            if (dict.count(c) == 1 && dict[c] >= begin) {
                begin = (dict[c] + 1 > begin)? dict[c] + 1: begin + 1;
                count = i - begin + 1;  
            }
            else {
                count += 1;
            }
            res = (count > res)? count: res;            
            dict[c] = i;
            if (res >= count + s.length() - i) {
                break;
            }
        }
        return res;
        
    }
};
// @lc code=end

