/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        auto sum{0};
        
        helper(root, &sum);
        
        return sum;
    }
    
    void helper(TreeNode* node, int* sum) {
        if (node == nullptr) {
            return;
        }
        
        if (node->left != nullptr 
            && node->left->left == nullptr && node->left->right == nullptr) {
            *sum += node->left->val;
        }
        
        helper(node->left, sum);
        helper(node->right, sum);
    }
};
