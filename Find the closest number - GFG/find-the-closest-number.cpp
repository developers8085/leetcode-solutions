//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    { 
        if(arr[0]>=target){
            return arr[0];
        }
        if(arr[n-1]<=target){
            return arr[n-1];
        }
        return getClosestOne(arr,n,target);
    } 
    int getClosestOne(int arr[],int n,int target){
        int mid =0;
        int l = 0;
        int r = n;
        while(l<r){
            mid = (l +r)/2;
            if(arr[mid]==target){
                return arr[mid];
            }
            if(target<arr[mid]){
                if(mid>0 && target>arr[mid-1]){
                    return closest(arr[mid-1],arr[mid],target);
                }
                r = mid;
            }else{
                if(mid<n-1 && target<arr[mid+1]){
                    return closest(arr[mid],arr[mid+1],target); 
                }
                l = mid+1;
            }
        }
        return arr[mid];
    }
    int closest(int x,int y,int key){
        return key-x>=y-key?y:x;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}

// } Driver Code Ends