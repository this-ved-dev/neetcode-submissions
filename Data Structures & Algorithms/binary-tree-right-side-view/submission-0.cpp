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
    map<int, vector<int>> mp;
    vector<int> rightSideView(TreeNode* root) {

        int depth = 0;
        dfs(root, depth);
        vector<int> final = FinalArr();
        return final;
        
    }

    vector<int> FinalArr()
    {
        vector<int> final;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            int size = it->second.size();
            final.push_back(it->second[size-1]);
        }
        return final;
    }

    void dfs(TreeNode* root, int depth)
    {
        if(!root)
        {
            return;
        }
        
        mp[depth].push_back(root->val);
        dfs(root->left, depth+1);
        dfs(root->right, depth+1);      
    }
};

