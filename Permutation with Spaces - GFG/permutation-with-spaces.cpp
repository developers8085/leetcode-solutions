//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:

    vector<string> permutation(string S){
        vector<string> ans;
        int n = S.size();
        char a[n];
        char buff[2*n];
        for(int i=0;i<n;i++){
            a[i]=S[i];
        }
        buff[0]=a[0];
        compute(ans,a,buff,1,1,n);
        return ans;
    }
    void compute(vector<string> &ans,char a[],char buff[],int i,int j,int n){
        if(i==n){
            buff[j] = '\0';
            ans.push_back(convertToString(buff));
            return ;
        }
        buff[j]=' ';
        buff[j+1]=a[i];
        compute(ans,a,buff,i+1,j+2,n);
        buff[j]=a[i];
        compute(ans,a,buff,i+1,j+1,n);
    }
    string convertToString(char *a){
        return string(a);
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends