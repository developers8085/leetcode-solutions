//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    int solve(int Num1,int Num2)
    {   
      int upper_bound = 10000;
        vector<int> prime(upper_bound,1);
        prime[0]=0;
        prime[1]=0;
        for(int i=2;i*i<=upper_bound;i++){
            if(prime[i]==1){
                for(int j=i+i;j<upper_bound;j= j+i){
                    prime[j]=0;
                }
            }
        }
        
        string start = to_string(Num1);
        string end = to_string(Num2);
        queue<pair<string,int>> pq;
        pq.push({start,0});
        unordered_set<string> hs;
        hs.insert(start);
        while(!pq.empty()){
            auto pr = pq.front(); pq.pop();
            string num = pr.first;
            int steps = pr.second;
            if(end == num){
                return steps;
            }
            for(int i=0;i<4;i++){
                string org = num;
                for(char ch ='0';ch<='9';ch++){
                    if(i==0 && ch=='0'){
                        continue;
                    }
                    num[i] = ch;
                    int val = stoi(num);
                    if(prime[val]==1){
                        if(hs.find(num) == hs.end()){
                            hs.insert(num);
                            pq.push({num,steps+1});
                        }
                    }
                    
                }
                num = org;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int Num1,Num2;
      cin>>Num1>>Num2;
      Solution obj;
      int answer=obj.solve(Num1,Num2);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends