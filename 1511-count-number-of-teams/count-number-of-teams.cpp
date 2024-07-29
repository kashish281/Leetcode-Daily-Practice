class Solution {
public:
    int numTeams(vector<int>& rating) {
        int size = rating.size();
        int teamCnt = 0;
        for(int currIndx = 0; currIndx < size; currIndx++){
            int leftSmaller = 0, rightLarger = 0;
            int leftLarger = 0, rightSmaller = 0;
            for(int prevIndx = currIndx - 1; prevIndx > -1; prevIndx--){
                if(rating[currIndx] > rating[prevIndx])leftSmaller++;
                if(rating[currIndx] < rating[prevIndx])leftLarger++;
            }
            for(int nextIndx = currIndx + 1;  nextIndx < size; nextIndx++){
                if(rating[currIndx] > rating[nextIndx])rightSmaller++;
                if(rating[currIndx] < rating[nextIndx])rightLarger++;
            }
            teamCnt += leftSmaller * rightLarger;
            teamCnt += leftLarger * rightSmaller;
        }
        return teamCnt;
    }
};