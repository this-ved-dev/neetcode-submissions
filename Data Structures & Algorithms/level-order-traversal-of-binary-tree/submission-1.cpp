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
    vector<vector<int>> final;
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        int depth = 0;
        dfs(root, depth);
        return final;
    }
    void dfs(TreeNode* root, int depth)
    {
        if(!root)
        {
            return;
        
        }
        
            if(final.size() == depth)
            {
                final.emplace_back();
            }
            final[depth].push_back(root->val);
            dfs(root->left, depth+1);
            dfs(root->right, depth+1);
        
    }
};
