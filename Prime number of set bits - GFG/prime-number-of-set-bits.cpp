//{ Driver Code Starts


// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int primeSetBits(int L, int R){
        int tot_bit, count = 0;
    for (int i = L; i <= R; i++) {
        tot_bit = __builtin_popcount(i);
        if (isPrime(tot_bit))
            count++;
    }
    return count;
    }
    bool isPrime(int n){
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n%2 == 0 || n%3 == 0) 
       return false;
       
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
        return false;
    return true;
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout<<ob.primeSetBits(L,R)<<endl;
    }
    return 0;
}

// } Driver Code Ends