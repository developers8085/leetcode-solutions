//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isGoodorBad(string S) {
        
        int vcount=0;
        int ccount=0;
        int n = S.size();
        for(int i=0;i<n;i++){
            if(S[i]=='?'){
                if(ccount == vcount ){
                    vcount++;
                    ccount++;
                } else if(ccount==0){
                    vcount++;
                }else{
                    ccount++;
                }
            }else if(vowels(S[i])==true){
                vcount++;
                ccount=0;
            }else{
                ccount++;
                vcount=0;
            }
            if(vcount>5 || ccount>3)
             return false;
        }
        return true;
    }
    bool vowels(char ch){
        if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u')
         return true;
         return false;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        
        cin >> S;
        
        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    }
    return 0; 
}
// } Driver Code Ends