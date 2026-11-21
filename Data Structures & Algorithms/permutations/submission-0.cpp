class Solution {
public:
    int fact(int n){
        int ans=1;
        for(int i=1;i<=n;i++) ans=ans*i;
        return ans;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        int f=fact(n);
        int c=0;
        while(c<f){
            int ind=-1;
            for(int i=n-2;i>=0;i--){
                if(nums[i+1]>nums[i]){
                   ind=i;
                   break;
                }
            }
            if(ind==-1){
                reverse(nums.begin(),nums.end());
                ans.push_back(nums);
                c++;
                continue;
            }
            for(int i=n-1;i>ind;i--){
                if(nums[i]>nums[ind]){
                    swap(nums[i],nums[ind]);
                    break;
                }
            }
            c++;
            reverse(nums.begin()+ind+1,nums.end());
            ans.push_back(nums);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
