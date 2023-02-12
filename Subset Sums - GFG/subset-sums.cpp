//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        int size = power(2,N);
        ans.push_back(0);
        for(int i=1;i<size;i++){
            int sum = 0;
            for(int j=0;j<N;j++){
                if(i & 1<<j){
                    sum = sum + arr[j];
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
    int power(int x,int y){
        if(y==0){
            return 1;
        }
        return x * power(x,y-1);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends