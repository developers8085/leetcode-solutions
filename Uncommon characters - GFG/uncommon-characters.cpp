//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
           set<char> s1;
           int n= A.size();
           for(int i=0;i<n;i++){
               s1.insert(A[i]);
           }
           set<char> s2;
           int m = B.size();
           for(int i=0;i<m;i++){
               s2.insert(B[i]);
           }
        //   for(auto x : s1){
        //       cout<<x<<endl;
        //   }
        //   cout<<"eeee"<<endl;
        //   for(auto x : s2){
        //       cout<<x<<endl;
        //   }
           
           
           string ans ="";
           vector<char> vc;
          for(auto x : s1){
              if(s2.find(x) ==s2.end()){
                  vc.push_back(x);
              }
              s1.erase(x);
              s2.erase(x);
          }
           for(auto x : s2){
               vc.push_back(x);
           }
           sort(vc.begin(),vc.end());
           if(vc.size()==0){
               return "-1";
           }
           for(int i=0;i<vc.size();i++){
               ans = ans +vc[i];
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
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends