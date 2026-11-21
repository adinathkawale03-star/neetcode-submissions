class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int s=0;
       int m=INT_MIN;
       for(int i:nums){
        s+=i;
        m=max(s,m);
        if(s<0) s=0;
       }
       return m;
    }
};
