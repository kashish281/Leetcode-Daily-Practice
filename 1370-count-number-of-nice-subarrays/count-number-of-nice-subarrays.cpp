class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int start = 0;
        int ans = 0;
        int odds = 0;
        int i, temp = 0;
        for( i=0; i<nums.size(); i++){
            if(odds < k){
                if(nums[i]%2 == 1){
                    odds++;
                }
                if(odds == k) ans++;
            }
            else if(odds == k && nums[i]%2 == 0){
                ans++;
                temp++;
            }
            else{
                while(nums[start] % 2 == 0){
                    start++;
                    ans+=(temp+1);
                }
                if(nums[i] % 2 == 1){
                    temp = 0;
                    start++;
                    ans++;
                }
            }
        }
        while(start < nums.size() && nums[start] % 2 == 0 && odds == k){
            start++;
            ans+=(temp+1);
        }
        return ans;
    }
};