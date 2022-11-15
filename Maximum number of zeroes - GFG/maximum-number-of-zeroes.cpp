//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
    	string MaxZero(string a[],int n)
    	{
    	    string ans="";
    	    int maxZero=0;
    	    for(int i=0;i<n;i++){
    	        int m = a[i].size();
    	        int currZero=0;
    	        for(int j=0;j<m;j++){
    	            if(a[i][j]-'0'==0){
    	                currZero++;
    	            }
    	        }
    	        if(currZero !=0 && currZero>=maxZero){
    	            if(currZero>maxZero){
    	                ans = a[i];
    	                maxZero = currZero;
    	            }else if(currZero==maxZero){
    	                if(ans.size() == a[i].size() && ans<a[i]  || ans.size()<a[i].size()){
    	                    ans=a[i];
    	                }
    	            }
    	        }
    	    }
    	    if(ans ==""){
    	        ans ="-1";
    	    }
    	    return ans;
    	}
};
	 

//{ Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    string a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    

      

        Solution ob;
        cout << ob.MaxZero(a,n) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends