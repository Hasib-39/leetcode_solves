#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                nums.erase(nums.begin()+i);
                i--;
            }
        }

        return nums.size();
    }
};

int main() {
    Solution s;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << s.removeDuplicates(nums) << endl;
    return 0;
}