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
    int maxV = -1; 
    void traverse(TreeNode* node, int val = -1)
    {
        if (node == NULL) 
        {
            return;
        }
        if(val==-1) 
        {
            val = node->val;
        }
        maxV = max(maxV, abs(val-node->val));
        traverse(node->left, val);
        traverse(node->right, val);
    }

    void traverseAll(TreeNode* node)
    {
        if (node == NULL) return;
        traverse(node, -1);
        traverseAll(node->left);
        traverseAll(node->right);
    }
    int maxAncestorDiff(TreeNode* root) {
        traverseAll(root);
        return maxV;
    }
};