//https://leetcode.cn/problems/binary-search/?envType=study-plan&id=suan-fa-ru-men&plan=algorithms&plan_progress=bgc5v6r
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l_side = 0;
        int r_side = nums.size() - 1;
        int mid_index = 0;
        while (r_side>=l_side) {
            mid_index = l_side + (r_side - l_side) / 2;
            if (nums[mid_index] == target) {
                return mid_index;
            } else if (nums[mid_index] < target) {
                l_side = mid_index + 1;
            } else {
                r_side = mid_index - 1;
            }
        }
        return -1;
    }
};


int main(void)
{
    Solution* sol = new Solution;


    delete(sol);
    return 0;
}
