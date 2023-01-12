//https://leetcode.cn/problems/remove-element/
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        uint8_t left = 0;
        for (uint8_t right = 0; right < nums.size(); right++) {
            if (nums[right] != val) {
                nums[left] = nums[right];
                left++;
            }
        }
        return (int)left;
    }
};


int main(void)
{
    Solution * sol = new Solution;

    vector<int> data = {0,1,2,2,3,0,4,2};

    cout << sol->removeElement(data, 2) << endl;
    /**/
    for (uint8_t i=0; i<data.size(); i++) {
        cout << data[i];
    }

    delete(sol);

    return 0;
}
