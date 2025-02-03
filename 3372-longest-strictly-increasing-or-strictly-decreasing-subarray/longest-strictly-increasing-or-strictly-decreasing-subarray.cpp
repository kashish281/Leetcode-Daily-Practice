class Solution {
public:
    int longestMonotonicSubarray(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        int maxi = 1; 
        int incLen = 1; 
        int decre = 1; 

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                incLen++; 
                decre = 1; 
            } else if (nums[i] < nums[i - 1]) {
                decre++; 
                incLen = 1; 
            } else {
                incLen = 1;
                decre = 1;
            }
            maxi = std::max(maxi, std::max(incLen, decre));
        }
        return maxi;
    }
};