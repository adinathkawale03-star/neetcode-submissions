class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string final="";
        for(int i=0;i<n;i++){
            if(!isalnum(s[i])){
                continue;
            }
            final+=tolower(s[i]);
        }
        int m=final.size();
        for(int i=0;i<m/2;i++){
            if(final[i]!=final[m-i-1]){
                return false;
            }
        }
        return true;
    }
};
