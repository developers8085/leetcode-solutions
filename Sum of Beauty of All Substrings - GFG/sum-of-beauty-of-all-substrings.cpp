//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        // Generate all possible substring
        
        // int n = s.size();
        // int i=0;
        // int ans =0;
        // for(int i=0;i<n;i++){
        //     int hs[26]={0};
        //     for(int j=i;j<n;j++){
        //         hs[s[j]-'a']++;
        //         ans = ans + beautySumString(hs);
        //     }
        // }
        // return ans;
        
        int n = s.length();
        int sum = 0;
        for(int i = 0;i < n;i++)
        {
            int freq[27]={0};
            for(int j = i; j < n;j++)
            {
                char ch = s[j];
                int ind = ch - 96;
                freq[ind]++;
                int beauty = getBeauty(freq);
                sum += beauty;
            }
        }
        return sum;
    }
    int getBeauty(int freq[]){
        int minF = INT_MAX;
        int maxF = INT_MIN;
        for(int i = 1;i < 27;i++)
        {
            if(freq[i] != 0)
            minF = min(minF,freq[i]);
            maxF = max(maxF,freq[i]);
        }
        int beauty = maxF - minF;
        return beauty;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends