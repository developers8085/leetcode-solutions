//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	vector<vector<int>> vec = uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}

// } Driver Code Ends


/*You are required to complete this function*/
vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
    vector<vector<int>> ans;
    set<vector<int>> s;
    
    for(int i=0;i<row;i++){
        // copy  vector to set
        vector<int> v(col);
        for(int j=0;j<col;j++){
            v[j]=M[i][j];
        }
        s.insert(v);
    }
    for(int i=0;i<row;i++){
        vector<int> v(col);
        for(int j=0;j<col;j++){
            v[j]=M[i][j];
        }
        if(s.find(v) != s.end()){
            ans.push_back(v);
            s.erase(v);
        }
    }
    
    return ans;
}