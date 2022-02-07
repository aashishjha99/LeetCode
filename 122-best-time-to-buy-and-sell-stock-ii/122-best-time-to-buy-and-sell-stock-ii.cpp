class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       int sum = 0;
        
        for(int i = 1; i < prices.size(); i++)
            if(prices[i] > prices[i - 1])     // conditon for checking whether the element                                               //   selling price is greater than purchased
                sum += max(prices[i] - prices[i - 1],0);
        
        return sum;

        
    }
};