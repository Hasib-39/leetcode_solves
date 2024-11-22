#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                i--;
            }else{
                cnt++;
            }
        }
        return cnt;
    }
};

int main(){
    Solution obj;
    vector<int> nums = {3,2,2,3};
    cout << obj.removeElement(nums, 3);
    return 0;
}