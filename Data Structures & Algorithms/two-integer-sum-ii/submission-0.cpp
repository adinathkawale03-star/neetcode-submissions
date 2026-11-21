class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++){
            int n=target-nums[i];
            if(a.find(n)!=a.end()){
                return {a[n]+1,i+1};
            }
            a[nums[i]]=i;
        }
        return {-1,-1};
    }
};
