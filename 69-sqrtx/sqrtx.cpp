class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        long long int mid= s+(e-s)/2;    //yha pe long long int isliye liye kyuki mid agar bht bda val lega to wo int me store nhi hoga
        int ans= -1;
        while(s<=e){
            //if mid is the ans 
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                ans = mid; //store ans
                s= mid+1; //go right 
            }
            else{
                e = mid-1; 
            }
            // we always forget this
            mid= s+(e-s)/2;

        }
        return ans;
    }
};