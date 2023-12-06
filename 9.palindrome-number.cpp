/*
 * @lc app=leetcode.cn id=9 lang=cpp
 * @lcpr version=30111
 *
 * [9] 回文数
 */


// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        std::string tostring = std::to_string(x);
        auto starts = tostring.begin();
        auto ends = tostring.end() - 1;
        while ((*starts == *ends) && (starts < ends)) 
        {
            starts++;
            ends--;
        }
        // 如果while循环未中断，说明是回文数
        if (starts >= ends)
            return true;
        return false;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 121\n
// @lcpr case=end

// @lcpr case=start
// -121\n
// @lcpr case=end

// @lcpr case=start
// 10\n
// @lcpr case=end

 */

