
// TC- o(N*N)
// MC - 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        int x=  nums.size();
        vector<int>v;
        for(int i=0;i<x;i++)
        {
            for(int j=i+1;j<x;j++)
            {
                if((nums[i]+nums[j])==target){
                    v.push_back(i);
                   v.push_back(j);
                  break;
                }
            }
        }
        
        return v;             
        
    }
};

------------------------------------Second Appro-------------------------------------------
-------------------------------------------------------------------------------
// TC - o(N)
// MC - o(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       unordered_map<int,int>mp;
        vector<int>v;
        int n = nums.size();
        int x ; 
       // for(int i=0;i<n;i++)
      //  {
       //     mp[nums[i]]=i;
      //  }
        for(int i=0;i<n;i++)
        {
             x = target-nums[i];
           if(mp.find(x)!=mp.end()){
               v.push_back(i);
                v.push_back(mp[x]);
             //   return v;
           }  
            mp[nums[i]]=i;
        }
        
        return v;
        
    }
};

