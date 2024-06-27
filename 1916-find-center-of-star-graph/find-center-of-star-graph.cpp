class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        bitset<100000> visited=0;
        for(auto& e: edges){
            int v=e[0], w=e[1];
            if (visited[v]) return v;
            if (visited[w]) return w;
            visited[v]=visited[w]=1;
        }
        return -1;
    }
};

auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();