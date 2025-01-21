#define ll long long
class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        ll pref = accumulate(grid[0].begin() , grid[0].end() , 0LL);
        ll suff = 0;

        long long ans = LLONG_MAX;
        for(int i=0;i<n;i++){
            pref -= grid[0][i];
            ans = min( ans , max( pref , suff ) );
            suff += grid[1][i];
        }
        return ans;
    }
};