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
    
    vector<vector<int>> res;

    vector<vector<int>> levelOrder(TreeNode* root) {
        dfs(root, 0);
        return res;
    }

    void dfs(TreeNode* node, int depth)
    {
        if(!node)
        {
            return;
        }

        int dp_chk = res.size();
        if(dp_chk==depth)
        {
            res.emplace_back();
        }

        res[depth].push_back(node->val);
        dfs(node->left, depth+1);
        dfs(node->right, depth+1);
    }

};
