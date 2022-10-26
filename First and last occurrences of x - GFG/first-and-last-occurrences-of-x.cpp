//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int binarySearchL(int arr[],int l,int r,int k){
    if(l>r)
      return -1;
     int ans =-1;
     while(l<=r){
         int mid = l+(r-l)/2;
         if(arr[mid] == k){
             ans = mid;
         }
         if(arr[mid]>=k){
             r=mid-1;
         }else{
             l=mid+1;
         }
     }
     return ans;
}

int binarySearchR(int arr[],int l,int r,int k){
    if(l>r)
      return -1;
     int ans =-1;
     while(l<=r){
         int mid = l+(r-l)/2;
         if(arr[mid] == k){
             ans = mid;
         }
         if(arr[mid]<=k){
             l = mid+1;
         }else{
             r=mid-1;
         }
     }
     return ans;
}
vector<int> find(int arr[], int n , int x )
{
      vector<int> ans;
      
      int x1 = binarySearchL(arr,0,n-1,x);
      int y1 = binarySearchR(arr,0,n-1,x);
      
      ans.push_back(x1);
      ans.push_back(y1);
      
      return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends