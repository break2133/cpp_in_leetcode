//https://leetcode.cn/problems/plus-one/
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i=0; i<digits.size(); i++) {
            if (digits[i] != 9) {
                for (int j=digits.size()-1; j>=0; j--) {
                    if (digits[j] != 9) {
                        digits[j] +=1;
                        break;
                    } else {
                        digits[j] = 0;
                    }
                }
                return digits;
            }
        }

        vector<int> ret(digits.size()+1, 0);
        ret[0] = 1;
        return ret;
    }
};

int main(void)
{
    Solution * sol = new Solution;
    vector<int> digits = {0};
    vector<int> ref_digits = sol->plusOne(digits);

    for (int i=0; i<ref_digits.size(); i++)
    {
        cout << ref_digits[i];
    }
    cout << endl;

    delete(sol);
    return 0;
}

