class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int,int>>ans;   // kyuki we want ans in pair
        int i=0, j=1;            // bcz we want unique values
        while(j<nums.size()){
            int diff = nums[j]-nums[i];
            if(diff==k){
                ans.insert({nums[i],nums[j]});
                ++i, ++j;
            }
            else if(diff>k){
                i++;
            }
            else {
                j++;
            }
            if(j==i){
                j++;
            }
        }
        return ans.size();

    }
};