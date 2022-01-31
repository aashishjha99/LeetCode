class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        int pist = 0;
        int list = prices[0];
        
        for(int i = 0;i<prices.size();i++) {
            
            list = min(list,prices[i]);
            pist = max(pist,prices[i]- list);
        }
        
        return pist;
        
    }
};