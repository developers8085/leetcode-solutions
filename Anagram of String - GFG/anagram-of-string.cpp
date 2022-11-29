//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string s, string s1)
{
          int hs[26]={0};
          int n = s.size();
          int m = s1.size();
          for(int i=0;i<n;i++){
              hs[s[i]-'a']++;
          }
          for(int i=0;i<m;i++){
              hs[s1[i]-'a']--;
          }
          
          int ans=0;
          for(int i=0;i<26;i++){
              ans = ans + abs(hs[i]);
          }
         return ans;
}