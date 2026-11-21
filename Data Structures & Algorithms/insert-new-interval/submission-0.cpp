class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& ne) {
        in.push_back(ne);
        sort(in.begin(),in.end());
        vector<vector<int>> ans;
        for(int i=0;i<in.size();i++){
            if(ans.empty() || ans.back()[1]<in[i][0]){
                ans.push_back(in[i]);
            }
            else{
                ans.back()[1]=max(ans.back()[1],in[i][1]);
            }
        }
        return ans;
    }
};
