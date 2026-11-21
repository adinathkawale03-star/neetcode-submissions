class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       int n=nums.size();
       vector<vector<int>> ans;
       sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++){
        if(i>0 && nums[i-1]==nums[i]) continue;
        for(int j=i+1;j<n;j++){
            if(j>i+1 && nums[j-1]==nums[j]) continue;
            int k=j+1;
            int z=n-1;
            while(k<z){
                long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[z];
                if(sum>target) z--;
                else if(sum<target) k++;
                else{
                    ans.push_back({nums[i],nums[j],nums[k],nums[z]});
                z--;
                k++;
                while(k<z && nums[k-1]==nums[k]) k++;
                while(k<z && nums[z+1]==nums[z]) z--;
                }
            }
        }
       } 
       return ans;
    }
};