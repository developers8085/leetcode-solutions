//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the largest number after k swaps.
    string findMaximumNum(string str, int k)
    {
        
        string ans=str;
        int n = str.size();
        fMax(str,ans,k,n,0);
        return ans;
    }
    void fMax(string str,string &ans,int k,int n,int cnt){
        if(k==0)
          return ;
        char cMax = str[cnt];
        for(int j=cnt+1;j<n;j++){
            if(cMax<str[j]){
                cMax = str[j];
            }
        }
        if(str[cnt] != cMax){
            k--;
        }
        for(int j=n-1;j>=cnt;j--){
            if(cMax == str[j]){
                swap(str[cnt],str[j]);
                if(str>ans){
                    ans = str;
                }
                fMax(str,ans,k,n,cnt+1);
                swap(str[cnt],str[j]);
            }
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}

// } Driver Code Ends