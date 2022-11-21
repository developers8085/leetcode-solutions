//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        map<int,int> mp1;
        map<int,int> mp2;
        vector<int> ans;
        int n = v1.size();
        int m = v2.size();
        for(int i=0;i<n;i++){
            mp1[v1[i]]++;
        }
        for(int i=0;i<m;i++){
            mp2[v2[i]]++;
        }
        
        for(auto x : mp1){
            int count = min(mp2[x.first],x.second);
            while(count>0){
                ans.push_back(x.first);
                count--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}
// } Driver Code Ends