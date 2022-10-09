class Solution {
  public:
    int n, m;
    vector<vector<int>> v, vis;
    void solve(int i, int j){
        if(i<0 or j<0 or i>=n or j>=m or vis[i][j] or v[i][j]==0)return;
        int d[]={0,-1,0,1,0};
        vis[i][j]=1;
        for(int k=0;k<4;k++){
            solve(i+d[k], j+d[k+1]);
        }
    }
    int fun(){
        vis=vector<vector<int>>(n, vector<int>(m,0));
        int ct=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j] and vis[i][j]==0){
                    ct++;
                    solve(i,j);
                }
            }
        }
        return ct;
    }
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        this->n=n, this->m=m;
        v=vector<vector<int>>(n, vector<int>(m,0));
        vector<int> ans;
        for(auto o:operators){
            v[o[0]][o[1]]=1;
            ans.push_back(fun());
        }
        return ans;
    }
};
