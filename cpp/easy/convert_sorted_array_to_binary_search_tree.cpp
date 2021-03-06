/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size());
    }
    
    TreeNode* helper(vector<int>& nums, int start, int end) {
        if (start == end) {
            return nullptr;
        }
        
        auto median = start + (end - start) / 2;
        auto node = new TreeNode(nums[median]);
        
        node->left = helper(nums, start, median);
        node->right = helper(nums, median + 1, end);
        
        return node;
    }
};
