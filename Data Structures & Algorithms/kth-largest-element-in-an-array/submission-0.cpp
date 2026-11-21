class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> qu;
        for(int i:nums) qu.push(i);
        while(k!=0){
            if(qu.empty()) break;
            k--;
            if(k==0){
                return qu.top();
            }
            qu.pop();
        }
        return -1;
    }
};
