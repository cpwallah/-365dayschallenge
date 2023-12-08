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
     void solve(TreeNode *root,string &res){
         if(root==NULL){
             return ;
         }
         res+=to_string(root->val);
         if(root->left==NULL && root->right==NULL){
             return ;
         }
         res+="(";
         solve(root->left,res);
         res+=")";
         if(root->right){
             res+="(";
         }
         solve(root->right,res);
         if(root->right){
             res+=")";
         }

         
     }
    string tree2str(TreeNode* root) {
        string res="";
       solve(root,res);
       return res;
    }
};
