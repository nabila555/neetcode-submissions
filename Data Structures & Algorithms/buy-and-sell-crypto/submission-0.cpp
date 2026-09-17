class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minprice=prices[0];
        int maxp=0;

        for(int x:prices){
            minprice=min(minprice,x);

            int profit=x-minprice;

            maxp=max(maxp,profit);
        }
        return maxp;
    }
};
