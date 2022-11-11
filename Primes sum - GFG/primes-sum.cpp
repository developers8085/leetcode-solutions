//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N){
        bool Prime[N+1];
        Prime[0]=Prime[1]=false;
        
        for (int i = 2; i <= N; i++)
           Prime[i] = true;
        
        for(int p=2;p*p<=N;p++){
            if (Prime[p] == true) {
                for (int i = p * p; i <= N; i += p){
                    Prime[i] = false;
                }
            }
        }
        for(int i=2;i<N;i++){
            if(Prime[i]==true && Prime[N-i]==true){
                return "Yes";
            }
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends