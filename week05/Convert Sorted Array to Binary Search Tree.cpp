// TC - O(N)
// SC - O(NlogN)


class Solution {
public:
    TreeNode* convertBSTfrom(vector<int>& nums , int L , int R)
    {
        if(L>R)
        return NULL;
        int M = L+(R-L)/2;
        TreeNode* root = new TreeNode(nums[M]);
        root->left = convertBSTfrom(nums,L, M-1);
        root->right = convertBSTfrom(nums,M+1,R);
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convertBSTfrom(nums,0,nums.size()-1);

    }
};