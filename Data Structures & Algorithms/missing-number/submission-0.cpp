class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s=n*(n+1)/2;
        int s2=0;
        for(int i:nums) s2+=i;
        return s-s2;
    }
};
