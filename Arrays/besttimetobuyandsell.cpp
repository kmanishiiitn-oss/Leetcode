class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int t = 0;
        for(int i = 0; i < prices.size(); i++){
            // if(mini > prices[i]){
            //     mini = prices[i];
            // }
            mini = min(mini, prices[i]);
            // else {
            //     t = max(t, prices[i]-mini);
            // }
            t = max(t, prices[i]-mini);
        }
        return t;
    }
};