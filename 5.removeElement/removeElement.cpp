//https://leetcode.cn/problems/remove-element/
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        uint8_t flag = 0;
        uint8_t p1 = 0;
        for (uint8_t i=0; i < nums.size(); i++) {
            if (nums[i] == val) {
                flag++;
            } else {
                if (flag != 0) {
                    nums[p1] = nums[i];
                    flag--;
                }
                p1++;
                
            }
        }
        return (int)p1;
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
