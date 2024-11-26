#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int>  productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zero++;
                if(zero > 1)break;
            }else{
                product *= nums[i];
            }
        }

        int n = nums.size();
        if(zero > 1){
            for(int i = 0; i < nums.size(); i++){
                nums[i] = 0;
            }
        }
        else if(zero){
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 0) nums[i] = product;
                else nums[i] = 0;
            }
        }else{
            for(int i = 0; i < nums.size(); i++){
                nums[i] = product / nums[i];
            }
        }

        return nums;
    }
};

int main(){
    vector<int> nums = {0,0};
    Solution s;
    vector<int> x = s.productExceptSelf(nums);
    for(int v : x){
        cout << v << " ";
    }
}