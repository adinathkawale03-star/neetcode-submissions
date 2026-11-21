class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<int,int> a;
        int l=0,r=0,maxi=0;
        while(r<n){
            if(a.find(s[r])!=a.end() && a[s[r]]>=l){
                l=a[s[r]]+1;
            }
            maxi=max(maxi,r-l+1);
            a[s[r]]=r;
            r++;
        }
        return maxi;
    }
};
