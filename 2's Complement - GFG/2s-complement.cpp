//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string complement(string bi){
        int n = bi.size();
        int carry = 1;
        for(int i=n-1;i>=0;i--){
            bi[i] = bi[i]=='1'?'0':'1';
            if(carry ==1){
                if(bi[i]=='1'){
                    bi[i]='0';
                }else{
                    bi[i]='1';
                    carry =0;
                }
                   
            }
        }
        
        return bi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string bi;
        cin>>bi;
        
        Solution ob;
        cout<<ob.complement(bi)<<endl;
    }
    return 0;
}
// } Driver Code Ends