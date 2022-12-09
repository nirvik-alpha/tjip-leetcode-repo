// TC - o(N)
// MC - o(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       int minimum  = prices[0];
        int  profit=0;
        for(int i=1;i<prices.size();i++){
            
            minimum = min(minimum , prices[i]);
            profit = max(profit , prices[i] - minimum);
        }
        
        return profit;
        
    }
};