#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int target = nums.size()-1;
        int first;
        for(int i = target - 1; i >= 0; i--){
            if(i + nums[i] >= target){
                target = i;
            }
        }

        return target == 0 ? true : false;
    }
};

int main(){
    vector<int> nums = {3,2,1,0,4};
    Solution sol;
    bool x = sol.canJump(nums);
    cout << (x == true ? "true" : "false") << endl;
}