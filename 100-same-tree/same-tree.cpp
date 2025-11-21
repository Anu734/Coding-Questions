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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<long long>a,b;
        inorder(p,a);
        inorder(q,b);
        return a==b;
    }

    void inorder(TreeNode* node,vector<long long>&ans){
        if (!node){
            ans.push_back(INT_MIN);  
            return;
        }
        ans.push_back(node->val);
        inorder(node->left,ans);
        inorder(node->right,ans);
    }


};