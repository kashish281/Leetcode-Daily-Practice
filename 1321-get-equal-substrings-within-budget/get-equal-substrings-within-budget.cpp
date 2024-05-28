class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i=0,j=0,sum=0,ans=0;
        while(j<t.length()){
            int a=s[j]-'a';
            int b=t[j]-'a';
            sum+=abs(a-b);
            if(sum<=maxCost){
                j++;
                ans=max(ans,j-i);
            }
            else if(sum>maxCost){
                while(sum>maxCost){
                    int x=s[i]-'a';
                    int y=t[i]-'a';
                    sum-=abs(x-y);
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};