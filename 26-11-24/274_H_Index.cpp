#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> cnt(n+1, 0);
        for(int c : citations){
            if(c >= n){
                cnt[n]++;
            }else{
                cnt[c]++;
            }
        }
        int count = 0;
        for(int i = n; i >= 0; i--){
            count += cnt[i];
            if(count >= i){
                return i;
            }
        }
        return 0;
    }
};

int main(){
    Solution s;
    vector<int> c = {3,0,6,5,1};
    int x = s.hIndex(c);
    cout << x << endl;
}