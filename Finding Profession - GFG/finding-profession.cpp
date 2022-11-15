//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    char profession(int level, int pos){
        // return function(level*1L,pos*1L);
        return function1(level,pos);
    }
    char function1(int level,int pos){
        int c = countSetBits(pos-1);
        return c%2 ==0?'e':'d';
    }
    int countSetBits(int n){
        int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
    }
    char function(long long level,long long pos){
        if(level ==1L){
            return 'e';
        }
        if(function(level-1,(pos+1)/2)=='d'){
            return (pos%2 !=0)?'d':'e';
        }
        return (pos%2 != 0)?'e':'d';
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int level, pos;
        cin>>level>>pos;
        
        Solution ob;
        if(ob.profession(level, pos) == 'd')
            cout<<"Doctor\n";
        else
            cout<<"Engineer\n";
    }
    return 0;
}
// } Driver Code Ends