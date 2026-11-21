class Solution {
public:
    int findCircleNum(vector<vector<int>>& g) {
        int n=g.size();
        vector<bool> v(n,false);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!v[i]){
                cnt++;
                dfs(i,g,v);
            }
        }
        return cnt;

    }
    void dfs(int i,vector<vector<int>>& g,vector<bool>& v){
        int n=g.size();
        queue<int> qu;
        qu.push(i);
        v[i]=true;
        while(!qu.empty()){
            int a=qu.front();
            qu.pop();
            for(int j=0;j<n;j++){
                if(g[a][j]==1 && !v[j]){
                    v[j]=true;
                    qu.push(j);
                }
            }
        }
    }
};