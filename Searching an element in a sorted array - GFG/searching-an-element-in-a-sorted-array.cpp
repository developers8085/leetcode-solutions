//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    {
        return bns(arr,0,N-1,K);
    }
    int bns(int arr[],int l,int r,int key){
        if(l>r){
            return -1;
        }
        int m = l+(r-l)/2;
        if(arr[m]==key){
            return 1;
        }
        if(arr[m]<key){
            return bns(arr,m+1,r,key);
        }
        return bns(arr,l,m-1,key);
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends