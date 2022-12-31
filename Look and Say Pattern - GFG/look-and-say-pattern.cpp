//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        
        if(n==1){
            return "1";
        }
        if(n==2){
            return "11";
        }
        vector<int> v;
        v.push_back(1);
        v.push_back(1);
        for(int i=3;i<=n;i++){
            vector<int> tmp;
            int size = v.size();
            int j=1;
            int cnt=1;
            while(j<size){
                if(v[j]!=v[j-1]){
                    tmp.push_back(cnt);
                    tmp.push_back(v[j-1]);
                    cnt=1;
                }else{
                    cnt++;
                }
                j++;
            }
            tmp.push_back(cnt);
            tmp.push_back(v[size-1]);
            v=tmp;
        }
        string ans="";
        for(int i=0;i<v.size();i++){
            ans = ans +to_string(v[i]);
        }
        return ans;
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends