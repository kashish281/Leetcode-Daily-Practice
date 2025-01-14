class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> freq(n + 1, 0);
        vector<int> ans(n, 0);
        int commonCount = 0;

        for (int i = 0; i < n; i++) {
            int l = A[i];
            int r = B[i];
            freq[l]++;
            freq[r]++;

            if (l == r && freq[l] == 2) {
                commonCount++;
            } 
            if (l != r && freq[l] == 2) {
                commonCount++;
            }
            if (l != r && freq[r] == 2) {
                commonCount++;
            }

            ans[i] = commonCount;
        }

        return ans;
    }
};