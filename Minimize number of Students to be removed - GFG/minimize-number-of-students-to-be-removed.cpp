//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int removeStudents(int H[], int n) {
        vector<int> tail(n, 0);
        tail[0]=H[0];
        int len =1;
        
        for(int i=1;i<n;i++){
            auto begin = tail.begin();
            auto end = tail.begin()+len;
            auto it = lower_bound(begin, end, H[i]);
            if(it == tail.begin() + len){
                tail[len++]=H[i];
            }else{
                *it = H[i];
            }
        }
        return n-len;
    }
    int removeStudentsN2(int H[],int n){
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends