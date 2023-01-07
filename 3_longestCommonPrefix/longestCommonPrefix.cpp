//https://leetcode.cn/problems/longest-common-prefix/
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str_ret = "";
        int j = 1;

        for (int i=0; i<strs[0].length(); i++) {
            for (j=1; j<strs.size(); j++) {
                if (strs[0][i] != strs[j][i]) {
                    goto ret;
                }
            }
            str_ret += strs[0][i];
        }

        ret:
        return str_ret;
    }
};

int main(void)
{
    Solution * sol = new Solution;
    vector<string> operations = {"flower","flow","flight"};
    string a = sol->longestCommonPrefix(operations);

    cout << a << endl;
    delete(sol);

    return 0;
}
