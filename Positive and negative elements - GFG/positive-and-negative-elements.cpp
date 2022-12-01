//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int arr[],int n)
    {
        vector<int> ans;
        vector<int> e;
        vector<int> o;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                e.push_back(arr[i]);
            }else{
                o.push_back(arr[i]);
            }
        }
        int i=0;
        int j=0;
        n = e.size();
        int m =o.size();
        while(i<n && j<m){
            ans.push_back(e[i]);
            ans.push_back(o[j]);
            i++;
            j++;
        }
        while(i<n){
            ans.push_back(e[i]);i++;
        }
        while(j<m){
            ans.push_back(o[j]);j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}

// } Driver Code Ends