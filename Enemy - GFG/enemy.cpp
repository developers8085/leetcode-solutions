//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            
            
            if(k == 0){
                return n*m;
            }
            
            
            vector<int> row;
            vector<int> col;
            for(int i=0;i<k;i++){
                row.push_back(enemy[i][0]);
                col.push_back(enemy[i][1]);
            }
            sort(row.begin(),row.end());
            sort(col.begin(),col.end());
            
            int maxR = max(row[0]-1,n-row[k-1]);
            int maxC = max(col[0]-1,m-col[k-1]);
            
            for(int i=1;i<k;i++){
                maxR = max(maxR,row[i]-row[i-1]-1);
                maxC = max(maxC,col[i]-col[i-1]-1);
            }
            return maxR*maxC;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k;
        cin>>k;
        vector<vector<int>> e(k,vector<int>(2));
        for(int i=0;i<k;i++)
            cin>>e[i][0]>>e[i][1];
        Solution a;
        cout<<a.largestArea(n,m,k,e)<<endl;
    }
    return 0;
}
// } Driver Code Ends