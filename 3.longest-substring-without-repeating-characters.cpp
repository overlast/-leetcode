/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include <vector>
#include <string>
class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int res = 0;
        std::vector<int> dict(256, -1);
        int begin = -1;
        for (int i = 0; i < s.length(); i++) {
            if (dict[s[i]] > begin) {
                begin = dict[s[i]];
            }
            res = ((i - begin) > res)? i - begin: res;            
            dict[s[i]] = i;
        }
        return res;
    }
};
// @lc code=end

