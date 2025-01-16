class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int temp=0;
        if(n&1){
            for(int i=0;i<m;i++){
                temp=temp^nums2[i];
            }
        }
        if(m&1){
            for(int i=0;i<n;i++){
                temp=temp^nums1[i];
            }
        }
        return temp;
    }
};