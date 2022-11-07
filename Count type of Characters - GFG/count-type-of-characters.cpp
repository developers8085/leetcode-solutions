//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string S)
        {
            int l=0;
            int u=0;
            int n=0;
            int s=0;
            int size = S.size();
            for(int i=0;i<size;i++){
                char ch = S[i];
                
                if(ch >='A' && ch<='Z')
                  u++;
                else if(ch >='a' && ch<='z')
                  l++;
                else if(ch >='0' && ch<='9')
                  n++;
                else
                  s++;
            }
            vector<int> ans(4);
            ans[0]=u;
            ans[1]=l;
            ans[2]=n;
            ans[3]=s;
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends