// TC - O(n+m)+o(nlogn) ----> n= size of num1 , m= size of num2 
/// MC - o(1)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        for(int i=m,j=0;i<m+n,j<n;i++,j++)  /////// o(n+m)
        {
            nums1[i]= nums2[j];
        }
        
        sort(nums1.begin(),nums1.end());   /// o(nlogn)
        
    }
};