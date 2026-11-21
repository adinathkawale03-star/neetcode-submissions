class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int maxi=0;
        while(l<r){
            maxi=max(maxi,((r-l)*min(nums[l],nums[r])));
            if(nums[l]>=nums[r]){
                r--;
            }
            else{
                l++;
            }

        }
        return maxi;
    }
};
