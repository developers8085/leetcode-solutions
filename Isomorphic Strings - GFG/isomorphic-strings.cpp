//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        unordered_map<char,char> unmp;
        if(str1.size() != str2.size()){
            return false;
        }
        unmp[str1[0]] = str2[0];
        int n = str1.size();
        for(int i=1;i<n;i++){
            if(unmp.find(str1[i]) == unmp.end()){
                unmp[str1[i]] = str2[i];
            }else{
                if(unmp[str1[i]] != str2[i]){
                    return false;
                }
            }
        }
        unmp.clear();
        unmp[str2[0]] = str1[0];
        for(int i=1;i<n;i++){
            if(unmp.find(str2[i]) == unmp.end()){
                unmp[str2[i]] = str1[i];
            }else{
                if(unmp[str2[i]] != str1[i]){
                    return false;
                }
            }
        }
        return true;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends