class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        for(auto it:a){
            if(it.second>=2){return true;}
        }
        return false;
    }
};