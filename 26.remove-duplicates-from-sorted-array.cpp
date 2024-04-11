/*
 * @lc app=leetcode.cn id=26 lang=cpp
 * @lcpr version=30122
 *
 * [26] 删除有序数组中的重复项
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
    int removeDuplicates(vector<int>& nums) {
        // 使用双指针
        int i = 1;//记录唯一元素应该插入的位置
        auto beg = nums.begin() + 1;
        for (; beg != nums.end(); ++beg)
        {
            // 如果找到不重复元素。
            if (*beg != nums[i-1]){
                nums[i] = *beg;
                ++i;
            }
        }
        return i;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,1,2]\n
// @lcpr case=end

// @lcpr case=start
// [0,0,1,1,1,2,2,3,3,4]\n
// @lcpr case=end

 */

