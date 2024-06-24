class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        int flips = 0;
        int flipCount = 0;
        vector<bool> isflipped(n, false);

        for (int i = 0; i < n; i++) {
            // When we have passed 'k' elements, check if we should undo the flip effect
            if (i >= k && isflipped[i - k]) {
                flipCount--;
            }

            // Check if current bit needs flipping
            if (flipCount % 2 == nums[i]) {
                if (i + k > n) {
                    return -1; // Not enough bits to flip
                }

                flipCount++;
                isflipped[i] = true;
                flips++;
            }
        }

        return flips;
    }
};