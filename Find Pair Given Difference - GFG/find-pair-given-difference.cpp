//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int n, int k){
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        int l = i+1;
        int r = n-1;
        int data = k+arr[i];
        while(l<=r){
            int mid = l+(r-l)/2;
            if(arr[mid] == data)
               return true;
            if(arr[mid]>data){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
    }
    return false;
}

