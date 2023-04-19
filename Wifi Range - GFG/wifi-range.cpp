//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        vector<bool> tmp(N,false);
        int steps = 0;
        for(int i=0;i<N;i++){
            if(S[i] == '1'){
                steps= X;
                tmp[i] = true;
            }else if(steps>=1){
                steps--;
                tmp[i] = true;
            }
        }
        steps =0;
        for(int i=N-1;i>=0;i--){
            if(S[i] == '1'){
                steps= X;
                tmp[i] = true;
            }else if(steps>=1){
                steps--;
                tmp[i] = true;
            }
        }
        for(int i=0;i<N;i++){
            if(tmp[i]== false){
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends