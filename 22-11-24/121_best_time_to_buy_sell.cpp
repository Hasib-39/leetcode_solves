#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int cheap = INT_MAX;
        int profit = 0;
        for(int i = 0; i < n; i++){
            cheap = min(cheap, prices[i]);
            profit = max(profit, prices[i] - cheap);
        }
        return profit;
    }
};

int main(){
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout << s.maxProfit(prices);
    return 0;
}