//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        map<string,int> mp_cand;
        map<string,int> mp_freq;
        for(int i=0;i<n;i++){
            mp_cand[arr[i]]++;
            if(mp_freq.find(arr[i]) == mp_freq.end())
               mp_freq[arr[i]] = i;
        }
        
        string ans="";
        int freq=0;
        int pos = -1;
        
        for(auto x: mp_cand){
            if(x.second > freq || freq == x.second && mp_freq[x.first]>pos){
                ans = x.first;
                freq = x.second;
                pos = mp_freq[x.first]; 
            }
            // cout<<x.first<<" "<<x.second<<" "<<mp_freq[x.first]<<endl;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.mostFrequentWord(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends