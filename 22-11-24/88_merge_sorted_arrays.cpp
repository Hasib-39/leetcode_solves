#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x = m+n - 1;
        for(int i = m-1, j = n-1; j >= 0; --x){
            if(i >= 0 && nums1[i] > nums2[j]){
                nums1[x] = nums1[i--];
            }else{
                nums1[x] = nums2[j--];
            }
        }
    }
};

int main(){
    Solution obj;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    obj.merge(nums1, 3, nums2, 3);
    for(auto i: nums1){
        cout << i << " ";
    }
    return 0;
}