//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        string ans="";
        
        int n = s.size();
        stack<char> st;
        
        for(int i=0;i<n;i++){
            if(s[i]!='.'){
                st.push(s[i]);
            }else{
                string str ="";
                while(!st.empty()){
                    str=str+st.top(); st.pop();
                }
                ans = ans+str+".";
            }
        }
        string str ="";
        while(!st.empty()){
            str=str+st.top(); st.pop();
        }
        return ans+str;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends