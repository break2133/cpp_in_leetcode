//https://leetcode.cn/problems/evaluate-boolean-binary-tree/solution/ji-suan-bu-er-er-cha-shu-de-zhi-by-leetc-4g8f/
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if (root->left == nullptr) {
            return root->val;
        }
        if (root->val == 2) {
            return evaluateTree(root->left) || evaluateTree(root->right);
        } else {
            return evaluateTree(root->left) && evaluateTree(root->right);
        }
    }
};

int main(void)
{
    Solution* sol = new Solution;


    delete(sol);
    return 0;
}
