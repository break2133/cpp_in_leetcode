//https://leetcode.cn/problems/maximum-number-of-consecutive-values-you-can-make/
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(), coins.end());
        int point = 0;
        int sum = 0;
        int ret = 0;

        while (1) {
            sum += coins[point];
            if (sum - (ret + 1) <= ret) {
                ret = sum;
                point++;
                if (point >= coins.size()) {
                    return ret + 1;
                }
            } else {
                return ret + 1;
            }
        }
    }
};


int main(void)
{
    Solution* sol = new Solution;
    vector<int> input = { 1,4,10,3,1 };

    cout << sol->getMaximumConsecutive(input) << endl;

    delete(sol);
    return 0;
}



