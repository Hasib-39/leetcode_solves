#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        s = preprocessString(s);
        int i = 0, j = s.size()-1;
        while(i <= j){
            if(s[i] == s[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }

        return true;
    }

    string preprocessString(const string& str) {
    string result = "";
    for (char ch : str) {
        if (isalnum(ch)) { 
            result += tolower(ch); 
        }
    }
    return result;
}
};

int main(){
    string s = "A man, a plan, a canal: Panama";
    Solution sol;
    bool ans = sol.isPalindrome(s);
    cout << ans << endl;
}