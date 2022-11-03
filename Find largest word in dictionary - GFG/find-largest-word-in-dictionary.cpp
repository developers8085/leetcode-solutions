//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string findLongestWord(string str, vector<string> dict)
    {
        string result = "";
        int length = 0;
        for (auto  word : dict) {
            if (isSubSequence(word, str)) {
                if(result.size() < word.size() || result.size() == word.size() && result>word){
                   result = word;   
                }
            }
        }
        return result;
    }
    bool isSubSequence(string str1, string str2)
    {
        int m = str1.length(), n = str2.length();
        int j = 0;
        for (int i = 0; i < n && j < m; i++)
            if (str1[j] == str2[i])
                j++;
        return (j == m);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> d(n + 1);
        for (int i = 0; i < n; i++) cin >> d[i];
        string S;
        cin >> S;
        Solution ob;
        cout << ob.findLongestWord(S, d) << endl;
    }
    return 0;
}

// } Driver Code Ends