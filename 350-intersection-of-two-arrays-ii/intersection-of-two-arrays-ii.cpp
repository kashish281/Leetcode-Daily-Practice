class Solution {
public:
    static vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int freq[1001]={0}, sz=nums1.size();
        for(int x: nums1) freq[x]++;
        vector<int> ans;
        ans.reserve(sz);
        for(int x: nums2){
            if (freq[x]-->0) ans.push_back(x);
        }
        return ans;   
    }
};



auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();