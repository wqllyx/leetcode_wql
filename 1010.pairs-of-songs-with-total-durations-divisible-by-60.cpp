// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=1010 lang=cpp
 * @lcpr version=30117
 *
 * [1010] 总持续时间可被 60 整除的歌曲
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
    int numPairsDivisibleBy60(vector<int>& time) {
        int ans = 0, cnt[60]{};
        for (int t : time) {
            // 先查询 cnt，再更新 cnt，因为题目要求 i<j
            // 如果先更新，再查询，就把 i=j 的情况也考虑进去了
            ans += cnt[(60 - t % 60) % 60];
            cnt[t % 60]++;
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [30,20,150,100,40]\n
// @lcpr case=end

// @lcpr case=start
// [60,60,60]\n
// @lcpr case=end

 */

