//https://leetcode.cn/problems/final-value-of-variable-after-performing-operations/
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (auto &op : operations) {
            if (op == "X++" || op == "++X") {
                x++;
            } else {
                x--;
            }
        }
        return x;
    }
};

int main(void)
{
    Solution * sol = new Solution;
    int a = 0;
    vector<string> operations = {"++X","++X","X++"};
    a = sol->finalValueAfterOperations(operations);
    cout << a << endl;

    delete(sol);
    return 0;
}
