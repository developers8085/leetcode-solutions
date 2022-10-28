//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        int n = str.size();
        int dist_chars =0;
        int visited[256]={0};
        for(int i=0;i<n;i++){
            visited[str[i]]++;
            if(visited[str[i]] == 1){
                dist_chars++;
            }
        }
        
        int count =0;
        int curr_hash[256]={0};
        int ans =INT_MAX;
        int st=0;
        
        for(int i=0;i<n;i++){
            curr_hash[str[i]]++;
            if(curr_hash[str[i]]==1){
                count++;
            }
            if(count == dist_chars){
                while(curr_hash[str[st]]>1){
                  curr_hash[str[st]]--;
                  st++;
            }
            int cur_win_len = i-st+1;
            if(cur_win_len<ans){
                ans = cur_win_len;
            }
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends