// TC - o(N)
// MC - o(1)

class Solution {
public:
    int trap(vector<int>& height) {
        
        int L =0 ,R =height.size()-1;
        int L_max=0 , R_max=0;

        int total_gain =0;
        while(L<R)
        {
            L_max= max(L_max,height[L]);
            R_max= max(R_max,height[R]);
            
            if(height[L]<height[R])
            {
               
                total_gain+=(L_max-height[L]);
                L++;
            }
            else{
               
                total_gain+=(R_max-height[R]);
                R--;
            }

        }


    return total_gain;

    }
};