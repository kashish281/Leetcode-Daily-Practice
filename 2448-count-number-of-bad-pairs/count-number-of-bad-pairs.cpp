class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        unordered_map<int, long long> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i] - i]++;
        }
        long long count = 0;
        for (auto& [key, val] : map) {
            count += (val * (val - 1)) / 2;
        }
        return (n * (n - 1) / 2) - count;
    }
};