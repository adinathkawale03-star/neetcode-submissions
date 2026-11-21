class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        int l=0;
        int r=n-1;
        int t=0;
        int left=0,right=0;
        while(l<r){
            if(arr[l]<=arr[r]){
                if(left>arr[l]){
                    t+=(left-arr[l]);
                }
                else{
                    left=arr[l];
                }
                l++;
            }
            else{
                if(right>arr[r]){
                    t+=(right-arr[r]);
                }
                else{
                    right=arr[r];
                }
                r--;
            }
        }
        return t;
    }
};
