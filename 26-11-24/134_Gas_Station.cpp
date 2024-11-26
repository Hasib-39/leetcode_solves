#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int index = 0;
        int g_sum = 0, c_sum = 0;
        int mx = 0;
        for(int i = 0; i < gas.size(); i++){
            g_sum += gas[i];
            c_sum += cost[i];
        }

        if(g_sum < c_sum){
            return -1;
        }

        for(int i = 0; i < gas.size(); i++){
            mx += (gas[i] - cost[i]);
            if(mx < 0){
                mx = 0;
                index = i + 1;
            }
        }

        return index;
    }
};

int main(){
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    Solution s;
    int x = s.canCompleteCircuit(gas, cost);
    cout << x << endl;
}