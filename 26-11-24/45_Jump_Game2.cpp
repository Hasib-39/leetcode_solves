#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int l = 0, r = 0, cnt = 0;
        while(r < nums.size() - 1){
            int right = 0;
            for(int i = l; i <= r; i++){
                right = max(right, i + nums[i]);
            }

            l = r + 1;
            r = right;
            cnt++;
        }

        return cnt;
    }
};

int main(){
    vector<int> nums = {2,3,1,1,4};
    Solution sol;
    int x = sol.jump(nums);
    cout << x << endl;
}