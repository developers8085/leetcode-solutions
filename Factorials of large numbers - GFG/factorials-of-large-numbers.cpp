//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        vector<int> ans;
        ans.push_back(1);
        for(int i=2;i<=N;i++){
            mult(ans,i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    void mult(vector<int> &ans,int n){
        int size = ans.size();
        int carry = 0;
        for(int i=0;i<size;i++){
            int prod = ans[i]*n+carry;
            ans[i]=prod%10;
            carry = prod/10;
        }
        while(carry>0){
            ans.push_back(carry%10);
            carry = carry/10;
        }
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
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends