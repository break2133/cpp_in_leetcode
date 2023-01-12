//https://leetcode.cn/problems/search-insert-position/
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int section_min = 0;
        int tar = nums.size();
        int section_max = tar-1;
        while (1) {
            if (nums[section_min + ((section_max - section_min) / 2)] >= target) {
                tar = section_min + ((section_max - section_min) / 2);
                section_max = tar - 1;
            } else if (nums[section_min + ((section_max - section_min) / 2)] < target) {
                section_min = section_min + ((section_max - section_min) / 2) + 1;
            }

            if (section_max < section_min) {
                return tar;
            }
        }

        return 0;
    }
};

int main(void)
{
    Solution * sol = new Solution;
    
    vector<int> nums = {1,3,5,6};

    cout << sol->searchInsert(nums, 7);

    delete(sol);

    return 0;
}
