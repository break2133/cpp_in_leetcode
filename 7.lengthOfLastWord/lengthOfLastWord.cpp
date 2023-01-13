//https://leetcode.cn/problems/length-of-last-word/
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        uint8_t flag = 0;
        int end_pos = 0;
        for (int i = s.length()-1; i>=0; i--) {
            if (s[i] != ' ') {
                if (flag != 1) {
                    flag = 1;
                    end_pos = i;
                }
            } else {
                if (flag == 1) {
                    return (end_pos - i);
                }
            }
        }

        return end_pos+1;
    }
};

int main(void)
{
    Solution * sol = new Solution;

    string s = "aaa    bnna           ";

    cout << sol->lengthOfLastWord(s);

    delete(sol);

    return 0;
}
