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
    int findDepth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return 1;
        }
        int ansl=findDepth(root->left)+1;
        int ansr=findDepth(root->right)+1;
        
        return max(ansl,ansr);
    }
    int maxDepth(TreeNode* root) {
        int ans=0;
        if(root==NULL){
            return 0;
        }
        ans=findDepth(root);
        return ans;
    }
};