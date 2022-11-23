//{ Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}

// } Driver Code Ends


string printSequence(string s)
{
    int n = s.size();
    int i=0;
    vector<string> hs(26);
    hs[0]="2";
    hs[1]="22";
    hs[2]="222";
    
    hs[3]="3";
    hs[4]="33";
    hs[5]="333";
    
    hs[6]="4";
    hs[7]="44";
    hs[8]="444";
    
    hs[9]="5";
    hs[10]="55";
    hs[11]="555";
    
    hs[12]="6";
    hs[13]="66";
    hs[14]="666";
    
    hs[15]="7";
    hs[16]="77";
    hs[17]="777";
    hs[18]="7777";
    
    hs[19]="8";
    hs[20]="88";
    hs[21]="888";
    
    hs[22]="9";
    hs[23]="99";
    hs[24]="999";
    hs[25]="9999";
    string ans ="";
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            ans = ans +"0";
        }else{
            ans = ans + hs[s[i]-'A'];
        }
    }
    return ans;
}