#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution {
private: int ret=0;
public:
    int finalValueAfterOperations(vector<string>& operations) {
        for (int i=operations.size(); i>0; i--) {
            if (operations[i] == "X++" || operations[i] == "++X") {
                ret += 1; 
            } else {
                ret -= 1;
            }
        }
        return ret;
    }
};

int main(void)
{
    cout << "Hello world!" << endl;
    vector<string> op = {"--X","X++","X++"};

    Solution * sol = new Solution;
    int a = sol->finalValueAfterOperations(op);

    cout << a << endl;

    delete(sol);

    return 0;
}
