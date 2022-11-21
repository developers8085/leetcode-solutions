//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int toggleBits(int N , int L , int R) {
        int index = countBits(N);
        int sub_v=0;
        int power=1;
        int n = N;
        int pos = 1;
        while(pos<=index){
            if(pos>=L && pos<=R){
                if(n%2==0){
                    sub_v += power;
                }else{
                    sub_v -= power;
                }
            }
            pos++;
            n=n/2;
            power = power*2;
        }
        return N + sub_v;
    }
    int countBits(int n){
        int count =0;
        while(n>0){
            n=n/2;
            count++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,L,R;
        
        cin>>N>>L>>R;

        Solution ob;
        cout << ob.toggleBits(N,L,R) << endl;
    }
    return 0;
}
// } Driver Code Ends