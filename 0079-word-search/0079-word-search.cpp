class Solution {
public:
    int r[4]={1,0,0,-1};
    int c[4]={0,-1,1,0};
    bool ans1=false;
    void solve(int i,int j,int cnt,vector<vector<char>>& a,int n,int m,vector<vector<int>>&vis,string w){
        if(cnt==w.length()){
            ans1 = true;
            return;
        }
        vis[i][j]=1;
        for(int k=0;k<4;k++){
            int newi=i+r[k];
            int newj=j+c[k];
            if(valid(newi,newj,a,vis,n,m,w,cnt)){
                
                solve(newi,newj,cnt+1,a,n,m,vis,w);
            }
        }
        vis[i][j]=0;
    }
    bool valid(int i,int j,vector<vector<char>>& a,vector<vector<int>>&vis,int n,int m,string w,int cnt){
        if(i<0||i>=n||j<0||j>=m||vis[i][j]==1||w[cnt]!=a[i][j]) return false;
        return true;
    }
    bool exist(vector<vector<char>>& a, string w) {
        int i,j,n=a.size(),m=a[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i][j]==w[0]) {
                solve(i,j,1,a,n,m,vis,w); 
                }
                //  if(ans==true) return ans;
            }
        }
        return ans1;
    }
    
};