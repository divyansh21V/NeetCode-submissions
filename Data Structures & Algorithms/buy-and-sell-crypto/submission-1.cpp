class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int count = 0;
        for (int i = 0 ; i < prices.size(); i++){
            int x = prices[i];
            for(int check = i+1 ; check < prices.size();check++){
                int sell = prices[check];
                count = max(count,sell-x);
            }
        }
        return count;
    }
};
