#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        
        int result = roman[s[s.size()-1]];
        for(int i = s.length() - 2; i >= 0; i--){
            if(roman[s[i+1]] > roman[s[i]]){
                result -= roman[s[i]];
            }else{
                result += roman[s[i]];
            }
        }

        return result;
    }
};

int main(){
    string s = "MCMXCIV";
    Solution sol;
    int ans = sol.romanToInt(s);
    cout << ans << endl;
    return 0;
}