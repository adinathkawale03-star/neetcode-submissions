class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int f,s;
       bool f1=false;
       bool s1=false;
       unordered_map<int,int> mp;
       int n=nums.size();
       for(int i:nums){
          mp[i]++;
          if(mp[i]>n/3){
            if(!f1){
                f1=true;
                f=i;
            }
            else if(i!=f){
                s1=true;
                return {f,i};
            }
          }
       } 
       if(!f1) return {};
       if(!s1) return {f};
       return {f,s};
    }
};