class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>res;
        int n = graph.size();
        vector<int>inDegree(n,0);
        vector<vector<int>>revGraph(n,vector<int>(0));
        for(int i = 0;i < graph.size();i++){
            for(int j = 0; j < graph[i].size();j++){
                revGraph[graph[i][j]].push_back(i);
                inDegree[i]++;
            }
        }
        queue<int>q;
        for(int i = 0;i < n;i++){
            if(!inDegree[i])q.push(i);
        }
        while(!q.empty()){
            int i = q.front();
            res.push_back(i);
            q.pop();
            for(int j:revGraph[i]){
                inDegree[j]--;
                if(inDegree[j] == 0) q.push(j);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};