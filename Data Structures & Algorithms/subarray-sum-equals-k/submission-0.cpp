class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int n=nums.size();
        int cnt=0;
        int sum=0;
        for(int i=0;i<n;i++){
           sum+=nums[i];
           int a=sum-k;
           if(mp.find(a)!=mp.end()){
            cnt += mp[a];
           }
           mp[sum]++;
        }
        return cnt;
    }
};