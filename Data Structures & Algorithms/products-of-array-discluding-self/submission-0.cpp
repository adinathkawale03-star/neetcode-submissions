class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n=nums.size();
      vector<int> prefix(n,1);
      vector<int> suffix(n,1);
      int p=1;
      int s=1;
      for(int i=0;i<n;i++){
        prefix[i]=p;
        suffix[n-i-1]=s;
        p=p*nums[i];
        s=s*nums[n-i-1];
      }
      for(int i=0;i<n;i++){
        nums[i]=prefix[i]*suffix[i];
      }
      return nums;
    }
};
