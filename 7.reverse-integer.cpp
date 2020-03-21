/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long res = 0;
        while (x != 0) {
            res = (res * 10) + (x % 10);
            x = x / 10;
        }
        if (res < INT_MIN || res > INT_MAX) {
            res = 0;
        }
        return res;
    }
};
// @lc code=end

