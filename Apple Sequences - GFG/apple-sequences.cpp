//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        int s=0;
        int e=0;
        int c=0;
        int ans=0;
        while(e<n){
            if(arr[e]=='O'){
                c++;
            }
            while(c>m){
                if(arr[s]=='O')
                 c--;
                s++;
            }
            if(c<=m){
                ans = max(ans,e-s+1);
            }
            e++;
        }
        return ans;
    }
    int solution1(int n,int m,string arr){
        int ocnt=0;
        int ans =0;
        for(int i=0;i<n;i++){
            ocnt=0;
            int j=i;
            for(j=i;j<n;j++){
                if(arr[j]=='O')
                  ocnt++;
                if(ocnt>m){
                    break;
                }
            }
            ans = max(ans,j-i);
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
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends