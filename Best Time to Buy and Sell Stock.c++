class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
        int maxe = INT_MAX;
            int current = 0;
            for(int i = 0; i < prices.size(); i++)
            {
                    current = max (current, prices[i] - maxe);
                    
                     maxe = min( maxe, prices[i]);
                    
            }return current;
    }
};
