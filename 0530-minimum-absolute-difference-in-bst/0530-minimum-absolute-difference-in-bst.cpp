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
     void solve(TreeNode* root,vector<int> &ans)
    {
        if(root==NULL) return;
        
        solve(root->left,ans);
        ans.push_back(root->val);
        solve(root->right,ans);
    }
    
    int getMinimumDifference(TreeNode* root) {
          vector<int> ans;
        
        solve(root,ans);
        
        int n = ans.size();
        
        int minSum = INT_MAX;
        int diff;
        
        for(int i=0;i<ans.size()-1;i++)
        {
            diff= ans[i+1]-ans[i];
            minSum = min(minSum,diff);
        }  
        
        return minSum;
    }
};