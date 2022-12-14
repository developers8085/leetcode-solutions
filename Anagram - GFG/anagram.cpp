//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        /*
        int hs[26]={0};
        
        if(a.size() != b.size())
          return false;
        int n = a.size();
        
        for(int i=0;i<n;i++){
            hs[a[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            hs[b[i]-'a']--;
        }
        for(int i=0;i<26;i++){
              if(hs[i] !=0)
                return false;
        }
        return true;
        */
        
        if(a.size() != b.size())
          return false;
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        if(a==b)
          return true;
        else
         return false;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends