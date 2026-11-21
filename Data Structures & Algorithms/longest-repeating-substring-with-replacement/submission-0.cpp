class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> a(26,0);
        int n=s.size(),l=0,r=0,maxfreq=0,maxi=0;
        while(r<n){
            a[s[r]-'A']++;
            maxfreq=max(maxfreq,a[s[r]-'A']);
            while(((r-l+1)-maxfreq)>k){
                a[s[l]-'A']--;
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};
