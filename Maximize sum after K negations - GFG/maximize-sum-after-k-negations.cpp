//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        sort(a,a+n);
        long long int sum = 0;
        long long int m_value = LONG_LONG_MAX;
        for(int i=0;i<n;i++){
            if(k>0 && a[i]<0){
                a[i]= a[i]*(-1);
                k--;
            }
            m_value = min(m_value,a[i]);
            sum = sum + a[i];
        }
        if(k>=1 && k%2 != 0){
            sum = sum - 2*m_value;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}
// } Driver Code Ends