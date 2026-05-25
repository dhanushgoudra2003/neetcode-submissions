class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minPrice=INT_MAX;
        int maxprofit=0;

        for(int price : prices)
        {
            minPrice=min(minPrice,price);
            int profit=price-minPrice;

            maxprofit=max(maxprofit,profit);
        }

        return maxprofit;

    }
};
