//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    int goodStones(int n,vector<int> &arr){
        vector<int> tmp(n,0);
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                tmp[i]=false;
            }else{
                int cc = i+arr[i];
                if(cc>=n || cc<=-1){
                    tmp[i]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(tmp[i] == false && arr[i] !=0)
               checkFortheCondition(n,tmp,arr,i);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            if(tmp[i]==2){
                ans++;
            }
        }
        return ans;
    }
    int checkFortheCondition(int n,vector<int> &tmp,vector<int> &arr,int i){
        unordered_set<int> s;
        while(true){
            if(i>=n || i<=-1 || tmp[i]==2){
                if(s.size()>0){
                    for(auto x : s){
                        tmp[x]=2;
                    }
                }
                tmp[i]=2;
                return true;
            }
            if(s.find(i) != s.end() || tmp[i]==1){
                if(s.size()>0){
                    for(auto x : s){
                        tmp[x]=1;
                    }
                }
                tmp[i]=1;
                return false;
            }
            s.insert(i);
            i = arr[i]+i;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.goodStones(n,arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends