#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        
        vector<pair<int, string>> roman = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };
        
        string result = "";
        
       
        for (const auto& [value, symbol] : roman) {
            while (num >= value) {
                result += symbol;  
                num -= value;    
            }
        }
        
        return result;
    }
};

int main() {
    int num = 3749; 
    Solution sol;
    string ans = sol.intToRoman(num);
    cout << ans << endl; 
    return 0;
}
