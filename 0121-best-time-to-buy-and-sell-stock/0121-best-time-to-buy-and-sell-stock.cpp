class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mp=0;
        int Bestbuy=prices[0];
        for(int i=1;i<prices.size();i++)
        {
        if(prices[i]>Bestbuy)
        {
            mp=max(mp,prices[i]-Bestbuy);
        }
    
        Bestbuy=min(Bestbuy,prices[i]);
        }
        return mp;


    }
};