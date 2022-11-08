//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        
        long long int xor2 =Arr[0];
        for(int i=1;i<N;i++){
            xor2 = xor2^Arr[i];
        }
        long long int set_bit = xor2 & ~(xor2-1);;
        long long int x=0;
        long long int y=0;
        for(int i=0;i<N;i++){
            if(set_bit & Arr[i]){
                x=x^Arr[i];
            }else{
                y=y^Arr[i];
            }
        }
        vector<long long int> ans;
        ans.push_back(max(x,y));
        ans.push_back(min(x,y));
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends