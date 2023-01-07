//https://leetcode.cn/problems/contains-duplicate/solution/cun-zai-zhong-fu-yuan-su-by-leetcode-sol-iedd/
#include <iostream>
#include <vector>
#include <string.h>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int x: nums) {
            if (s.find(x) != s.end()) {
                return true;
            }
            s.insert(x);
        }
        return false;
    }
};

int main(void)
{
    Solution * sol = new Solution;
    vector<int> operations = {1, 2, 3, 3};
    bool a = sol->containsDuplicate(operations);

    cout << a << endl;
    delete(sol);

    return 0;
}
