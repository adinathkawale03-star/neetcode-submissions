class Solution {
public:
    void merge(vector<int>& nums,int l,int m,int h){
        vector<int> temp;
        int le=l;
        int ri=m+1;
        while(le<=m && ri<=h){
            if(nums[le]<nums[ri]){
                temp.push_back(nums[le]);
                le++;
            }
            else{
                temp.push_back(nums[ri]);
                ri++;
            }
        }
        while(le<=m){
            temp.push_back(nums[le]);
            le++;
        }
        while(ri<=h){
            temp.push_back(nums[ri]);
            ri++;
        }
        for(int i=l;i<=h;i++){
            nums[i]=temp[i-l];
        }
    }
    void merge_sort(vector<int>& nums,int l,int h){
        if(l>=h) return;
        int m=(l+h)/2;
        merge_sort(nums,l,m);
        merge_sort(nums,m+1,h);
        merge(nums,l,m,h);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        merge_sort(nums,0,n-1);
        return nums;
    }
};