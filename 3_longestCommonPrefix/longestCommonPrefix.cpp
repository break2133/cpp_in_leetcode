//https://leetcode.cn/problems/longest-common-prefix/
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret;
        
        return ret;
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
