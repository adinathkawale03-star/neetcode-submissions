class Solution {
public:
    void dfs(int r,int c,int dx[],int dy[],vector<vector<char>>& grid,vector<vector<int>>& v,int n,int m){
        v[r][c]=1;
        for(int i=0;i<4;i++){
            if((r+dx[i])>=0 && (c+dy[i])>=0 && (r+dx[i])<n && (c+dy[i])<m && !v[r+dx[i]][c+dy[i]] && grid[r+dx[i]][c+dy[i]]=='1'){
              dfs(r+dx[i],c+dy[i],dx,dy,grid,v,n,m);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
      int n=grid.size();
      int m=grid[0].size();
      int ans=0;
      int dx[]={0,0,1,-1};
      int dy[]={1,-1,0,0};
      vector<vector<int>> v(n,vector<int>(m,0));
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='1' && !v[i][j]){
                ans++;
                dfs(i,j,dx,dy,grid,v,n,m);
            }
        }
      }  
      return ans;
    }
};
