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
    vector<int> calculatePreorder(TreeNode* root, vector<int>& res) {
        if(root == NULL) return res;
        res.push_back(root->val);
        calculatePreorder(root->left, res);
        calculatePreorder(root->right, res);
        return res;
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        calculatePreorder(root, res);
        return res;
    }
};