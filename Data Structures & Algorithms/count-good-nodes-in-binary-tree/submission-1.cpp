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
    int count = 0;
    int goodNodes(TreeNode* root) {
        int max = -101;
        dfs(root, max);
        return count;
    }
    void dfs(TreeNode* curr, int max)
    {
        if(!curr)
        {
            return;
        }
        
        if(curr->val>=max)
        {
            max = curr->val;
            count+=1;
        }
        

        dfs(curr->left, max);
        dfs(curr->right, max);

    }
};
