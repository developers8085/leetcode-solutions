//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int checkPower(int N){
        
        if(N==1)
          return 1;
        
        for(int i=2;i<=ceil(sqrt(N));i++){
            for(int j=2;j<=ceil(sqrt(N));j++){
                int pw = power(i,j);
                if(pw == N){
                    return 1;
                }
                if(pw > N)
                  break;
            }
        }
        return 0;
    }
    int power(int x,int y){
        int pw =1;
        
        while(y>0){
            pw = pw * x;
            y--;
        }
        return pw;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkPower(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends