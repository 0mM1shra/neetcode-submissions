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
    int calculate(TreeNode* root, int &diameter){
        if(root==NULL) return 0;
        int l=calculate(root->left,diameter);
        int r=calculate(root->right,diameter);
        diameter=max(diameter,l+r);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        if(root==NULL) return 0;
        calculate(root,diameter);
        return diameter;
    }
};
