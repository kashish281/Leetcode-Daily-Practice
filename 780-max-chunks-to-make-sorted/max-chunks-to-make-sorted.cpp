class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int res = 0, md = 0; // max distance
        for (int i = 0; i < arr.size(); i++) {
            md = max(md, arr[i]);
            if (i == md) { // Check if we can create a chunk
                res++;
            }
        }
        return res;
    }
};