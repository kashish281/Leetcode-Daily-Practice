class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
       map<int,int>mp;
       int maxi = INT_MIN;
       for(int i=0;i<values.size();i++){
           if(mp.size()>0){
              maxi = max(maxi,max(mp.begin()->first-i+values[i],mp.rbegin()->first-i+values[i]));
           }
           mp[i+values[i]] = i;
       }
       return maxi;
    }
};