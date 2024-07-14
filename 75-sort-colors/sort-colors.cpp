class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        int left = 0;
        int right = n-1;
        while(index<=right){
            if(nums[index]==0){
                swap(nums[index],nums[left]);
                left++;
                index++;
            }
            else if(nums[index]==2){
                swap(nums[index],nums[right]);
                right--;
            }
            else{
                index++;
            }
        }
        
    }
};


























// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int zeros = 0, ones = 0, n = nums.size();
//         for(int num : nums) {
//             if(num == 0) zeros++;
//             else if(num == 1) ones++;
//         }  

//         for(int i = 0; i < zeros; ++i) {
//             nums[i] = 0;
//         }

//         for(int i = zeros; i < zeros + ones; ++i) {
//             nums[i] = 1;
//         }

//         for(int i = zeros + ones; i < n; ++i) {
//             nums[i] = 2;
//         }
//     }
// };