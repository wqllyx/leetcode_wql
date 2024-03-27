// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=2748 lang=cpp
 * @lcpr version=30120
 *
 * [2748] 美丽下标对的数目
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
    int countBeautifulPairs(vector<int>& nums) {
        int cout = 0;
        for (int m = 0; m < nums.size(); ++m)
        {
            for (auto k = m +1 ; k < nums.size();++k){
                string strI = to_string(nums.at(m));
                string strJ = to_string(nums.at(k));
                int i = strI.front() - '0';
                int j = strJ.back() - '0';
                if (gcd(i,j) ==1) {
                    cout++;
                }
            }
        }
        return cout;
    }
    int gcd(int i, int j){
        int a = max(i, j);
        int b = min(i, j);
        int c = a % b;
        while (c){
            a = b;
            b = c;
            c = a % b;
        }
        return b;
    }
};
// @lc code=end


// @lcpr-div-debug-arg-start
// funName=countBeautifulPairs
// paramTypes= ["number[]"]
// @lcpr-div-debug-arg-end




/*
// @lcpr case=start
// [2,5,1,4]\n
// @lcpr case=end

// @lcpr case=start
// [11,21,12]\n
// @lcpr case=end

 */

