//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		bool f1= false;
		bool f2 = false;
		int index1=-1;
		int index2=-1;
		int n = s.size();
		int ans = INT_MAX;
		for(int i=0;i<n;i++){
		    if(word1 == s[i]){
		        f1 = true;
		        index1=i;
		    }
		    if(word2 == s[i]){
		        f2= true;
		        index2=i;
		    }
		    if(f1 && f2){
		        ans=min(ans,abs(index1-index2));
		    }
		}
		return ans;
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
   		int n;
   		cin >> n;

   		vector<string> s(n);
   		for(int i = 0; i < n; i++)
   			cin >> s[i];

   		string word1, word2;

   		cin >> word1 >> word2;
   		
   		Solution ob;

   		cout << ob.shortestDistance(s, word1, word2) << "\n";
   	}

    return 0;
}
// } Driver Code Ends