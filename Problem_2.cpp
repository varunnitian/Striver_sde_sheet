/*problem name-best time to buy and sell a stock-1*/
/*approach-1 iterative*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxiProfit=0;
        int minPrice=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++)
        {
            int sum=prices[i]-minPrice;
            minPrice=min(minPrice,prices[i]);
            maxiProfit=max(maxiProfit,sum);
        }
        return maxiProfit;
    }
};