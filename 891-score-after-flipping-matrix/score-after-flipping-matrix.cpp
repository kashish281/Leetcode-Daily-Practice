class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i=0,j=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(grid[i][0]==0){
                for(int j=0;j<m;j++){
                    grid[i][j]=1-grid[i][j];
                }
            }
        }
        int score=0;
        for(int j=0;j<m;j++){
            int countone=0;
            for(int i=0;i<n;i++){
                countone+=grid[i][j];
            }
            score+=max(countone,n-countone)*pow(2,m-1-j);
        }
        return score;
    }
};
