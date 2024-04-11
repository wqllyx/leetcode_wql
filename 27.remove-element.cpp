/*
 * @lc app=leetcode.cn id=27 lang=cpp
 * @lcpr version=30122
 *
 * [27] 移除元素
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
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        auto j = nums.begin();
        for (; j != nums.end(); ++j){
            // 如果当前元素要保留
            if ( *j != val){
                nums[i] = *j;
                ++i;
            }
        }
        return i;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,2,2,3]\n3\n
// @lcpr case=end

// @lcpr case=start
// [0,1,2,2,3,0,4,2]\n2\n
// @lcpr case=end

 */

