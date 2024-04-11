/*
 * @lc app=leetcode.cn id=35 lang=cpp
 * @lcpr version=30122
 *
 * [35] 搜索插入位置
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
    int searchInsert(vector<int>& nums, int target) {
        // 二分查找
        int lhs = 0;
        int rhs = nums.size() - 1;
        int mid = (rhs + lhs) / 2;
        while (lhs <= rhs)
        {
            if (nums[mid] == target){
                return mid;
            }
            if (target < nums[mid])
            {
                rhs = mid - 1;
                mid = (rhs + lhs) / 2;
            }
            else{
                lhs = mid + 1;
                mid = (rhs + lhs) / 2;
            }
        }
        return lhs;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,3,5,6]\n5\n
// @lcpr case=end

// @lcpr case=start
// [1,3,5,6]\n2\n
// @lcpr case=end

// @lcpr case=start
// [1,3,5,6]\n7\n
// @lcpr case=end

 */

