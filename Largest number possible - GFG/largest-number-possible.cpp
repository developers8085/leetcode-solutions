//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        
        if(N==0 || N>=2 && S==0){
            return "-1";
        }
        string ans ="";
        while(N>0 && S>=0){
            if(S>9){
                ans = ans+"9";
                S= S-9;
            }else{
                ans = ans+to_string(S);
                S=0;
            }
            N--;
        }
        if(N==0 && S==0){
            return ans;
        }
        if(N ==0 && S !=0){
            return "-1";
        }
        while(N>0){
            ans = ans+"0";
            N--;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends