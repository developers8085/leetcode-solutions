//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string printString(string &S, char ch, int count)
	{
	    if(count ==0){
	        return S;
	    }
	    int i=0;
	    int n = S.size();
	    while(i<n && count>=1){
	        if(S[i]==ch)
	          count--;
	          if(count ==0){
	              break;
	          }
	          i++;
	    }
	    
	    if(i<n-1){
	        return S.substr(i+1);
	    }
	    return "Empty string";
	}
};

//{ Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		char ch;
   		int count;

   		cin >> s >> ch >> count;
   		Solution ob;
   		cout << ob.printString(s, ch, count) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends