class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i:nums){
            a[i]++;
            if(a[i]>1){
                return i;
            }
        }
        return -1;
    }
};
