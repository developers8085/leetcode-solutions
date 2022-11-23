//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int N, vector<vector<int>> mat)
    {
        int ans =0;
        int n = mat.size();
        int m = mat.size();
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    mat[i][j]=mat[i][j]+max(mat[i-1][j],mat[i-1][j+1]);
                }else if(j==m-1){
                    mat[i][j]=mat[i][j]+max(mat[i-1][j-1],mat[i-1][j]);
                }else{
                    mat[i][j] = mat[i][j]+maxOf3(mat[i-1][j],mat[i-1][j-1],mat[i-1][j+1]);
                }
            }
        }
        
        for(int i=0;i<m;i++){
            ans = max(ans,mat[n-1][i]);
        }
        /* Recursive approach tried. Did not work
        for(int i=0;i<n;i++){
            vector<vector<bool>> visited(n);
            for(int i=0;i<n;i++){
                visited[i].resize(n,false);
            }
            visited[0][i]=true;
            ans = max(ans,findPath(Matrix,0,i,n,m,visited));
        } */
        return ans;
    }
    int maxOf3(int x,int y,int z){
        return max(x,max(y,z));
    }
    
    int findPath(vector<vector<int>> M,int x,int y,int n,int m,vector<vector<bool>> &visited){
        
        if(x>n || y >=m || y<0){
            return 0;
        }
        if(x==n-1){
            return M[x][y];
        }
        int r1 =0;
        int r2=0;
        int r3=0;
        if(validate(x+1,y,n,m) && visited[x+1][y]==false){
            visited[x+1][y]=true;
            r1= findPath(M,x+1,y,n,m,visited);
        }
        if(validate(x+1,y-1,n,m) &&visited[x+1][y-1]==false){
            visited[x+1][y-1]=true;
            r2= findPath(M,x+1,y-1,n,m,visited);
        }
        if(validate(x+1,y+1,n,m) && visited[x+1][y+1]==false){
            visited[x+1][y+1]=true;
            r3=  findPath(M,x+1,y+1,n,m,visited);
        }
        return M[x][y]+max(r1,max(r2,r3));
    }
    bool validate(int x,int y,int n,int m){
        if(x>=0 &&x<=n-1 && y>=0 &&y<=m-1){
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends