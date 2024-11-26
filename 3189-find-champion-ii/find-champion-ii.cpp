class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        
        vector<int> inorder(n, 0);

        //Calculating incoming edges/inorder
        for(auto &edge : edges){

            int u = edge[0];
            int v = edge[1];

            inorder[v]++;
        }

        int ans = -1;

        for(int i = 0; i < n; i++){ 

            //More than 1 "champion" nodes
            if(ans != - 1 && inorder[i] == 0){
                return -1;
            }

            //Our first "champion" node
            if(ans == -1 && inorder[i] == 0){
                ans = i;
            }
            
        }

        return ans;
    }
};