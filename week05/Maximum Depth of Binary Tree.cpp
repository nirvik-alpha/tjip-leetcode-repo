// TC - O(N)
// MC - O(N)

class Solution {
public:
    void traversal(TreeNode* root , int level , int &max_depth){

        if(root==NULL)
        return ;
        max_depth = max(max_depth , level);
        traversal(root->left , level+1 , max_depth);
        traversal(root->right , level+1 , max_depth);
    }
    int maxDepth(TreeNode* root) { 
        int max_depth = 0;
        traversal(root, 1, max_depth);
        return max_depth;
    }
};