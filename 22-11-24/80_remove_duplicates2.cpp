#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int j = 1;
        int cnt = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                cnt++;
            }else{
                cnt = 1;
            }

            if(cnt <= 2){
                nums[j] = nums[i];
                j++;
            }
        }

        return j;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,1,1,1};
    cout << s.removeDuplicates(nums) << endl;
    for(int v : nums){
        cout << v << " ";
    }
    return 0;
}