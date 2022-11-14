//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends



int countRev (string s)
{
    stack<char> st;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(!st.empty() && s[i]=='}'){
            if(st.top()=='{'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }else{
            st.push(s[i]);
        }
    }
    if(st.size()%2 !=0){
        return -1;
    }
    n=0;
    int unbalanced=st.size();
    while(!st.empty() && st.top()=='{'){
        st.pop();
        n++;
    }
    return unbalanced/2 + n%2;;
}