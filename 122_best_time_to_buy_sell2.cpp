#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        for(int i = 1; i < n; i++){
            profit += max(prices[i] - prices[i - 1], 0);
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