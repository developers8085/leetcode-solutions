//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	vector<int> num;
	    while(n>0){
	        num.push_back(n%2);
	        n = n/2;
	    }
	    if(num.size()%2 ==1){
	        num.push_back(0);
	    }
	    for(int i=0;i<num.size();i=i+2){
	        swap(num[i],num[i+1]);
	    }
	    
	    n=0;
	    int power=1;
	    for(int i=0;i<num.size();i++){
	        n= n+num[i]*power;
	        power=power*2;
	    }
	    return n;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}
// } Driver Code Ends