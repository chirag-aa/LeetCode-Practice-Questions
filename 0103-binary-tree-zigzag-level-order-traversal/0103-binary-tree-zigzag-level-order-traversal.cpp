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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int flag=0;
        
        vector<vector<int>>ans;
        
        if(root==NULL){
            return ans;
        }
        
        queue<TreeNode*>q1;
        q1.push(root);
                
        while(!q1.empty()){
            int n=q1.size();
            vector<int>v1;
            for(int i=0;i<n;i++){
               TreeNode* temp=q1.front();
               q1.pop();
                v1.push_back(temp->val);
               if(temp->left!=NULL){
                   q1.push(temp->left);
               }
                if(temp->right!=NULL){
                    q1.push(temp->right);
                }
            }
            if(flag==0){
                ans.push_back(v1);
                flag=1;
            }
            else if(flag==1){
                reverse(v1.begin(),v1.end());
                ans.push_back(v1);
                flag=0;
            }  
        }
        return ans;
    }
};