// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=128 lang=cpp
 * @lcpr version=30117
 *
 * [128] 最长连续序列
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
    int longestConsecutive(vector<int>& nums) {
        // 1. 去重
        unordered_set<int> myset(nums.begin(), nums.end());
        for (auto &item : myset){
            if (!myset.count(item - 1)){ // 如果当前遍历元素不存在前驱元素。则遍历当前元素。
                
            }
        }

    }
};
// @lc code=end



/*
// @lcpr case=start
// [100,4,200,1,3,2]\n
// @lcpr case=end

// @lcpr case=start
// [0,3,7,2,5,8,4,6,0,1]\n
// @lcpr case=end

 */

