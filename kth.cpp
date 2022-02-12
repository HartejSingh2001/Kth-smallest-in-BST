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
    int kthSmallest(TreeNode* root, int k) {
        vector<int>v;
        inorder(root,k,v);
        int count=1;
        vector<int>::iterator it;
        return v.at(k-1); 
    }
    void inorder(TreeNode* root, int k, vector<int>&v)
    {
        if(root!=NULL)
        {
            inorder(root->left,k,v);
            v.push_back(root->val);
            inorder(root->right,k,v);
        }
    }
};
