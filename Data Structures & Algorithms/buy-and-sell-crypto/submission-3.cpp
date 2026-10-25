class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int left = 0;

        int max_profit = 0;
        for (int right = 0; right < n; right++){
            if(prices[right] > prices[left]){
                int current_profit = prices[right] - prices[left];
                max_profit = max(max_profit, current_profit);
            }else{
                left = right;
            }
        }
        return max_profit;
    }
};

//Time: O(n) - each element is visited at most once
//Space: O(1) - constant auxiliary memory
