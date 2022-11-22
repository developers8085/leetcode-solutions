//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        if(n<=2){
            return n;
        }
        long long fib[n+1];
        fib[0]=1;
        fib[1]=1;
        fib[2]=2;
        for(int i=3;i<=n;i++){
            fib[i]=(fib[i-3]+fib[i-2]+fib[i-1])%(1000000007);
        }
        return fib[n];
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends