#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k % n);
        reverse(nums.begin() + k % n, nums.end());
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7};
    s.rotate(nums, 3);
    for(auto i: nums) cout << i << " ";
    return 0;
}