#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int ans = 0;
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (isPrefixAndSuffix(words[i], words[j])) {
                    ans++;
                }
            }
        }
        return ans;
    }
    
    bool isPrefixAndSuffix(string a, string b) {
        int lenA = a.length();
        if (lenA > b.length()) return false;
        return a == b.substr(0, lenA) && a == b.substr(b.length() - lenA);
    }
};