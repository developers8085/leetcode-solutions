//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

// } Driver Code Ends
class Solution
{
    public:
    string rearrangeString(string str)
    {
        int count[26];
        memset(count,0,sizeof(count));
        int n = str.size();
        for(int i=0;i<n;i++){
            count[str[i]-'a']++;
        }
        auto cmp = [&](pair<int,int> a,pair<int,int> b){
              return b.second > a.second;
        };
        priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(cmp)> pq(cmp);
        for(int i=0;i<26;i++){
            if(count[i]>=1){
                pq.push({i,count[i]});
            }
        }
        string ans="";
        while(pq.size()>=2){
            pair<int,int> x = pq.top(); pq.pop();
            pair<int,int> y = pq.top(); pq.pop();
            ans = ans +(char)(x.first+'a');
            ans = ans +(char)(y.first+'a');
            if(x.second-1>0){
                pq.push({x.first,x.second-1});
            }
            if(y.second-1>0){
                pq.push({y.first,y.second-1});
            }
        }
        if(pq.empty() == true){
            return ans;
        }
        if(pq.size()==1 && pq.top().second==1){
            pair<int,int> x = pq.top(); pq.pop();
            ans = ans +(char)(x.first+'a');
            return ans;
        }
        if(pq.top().second>1){
            return "-1";
        }
        return "-1";
    }
    
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution ob;
	    string str1=ob.rearrangeString(str);
	    int flag=1;
	    int c[26] = {0};
	    for(int i=0; i<str.length(); i++)
	        c[str[i]-'a']+=1;
	    int f = 0;
	    int x = (str.length()+1)/2;
	    for(int i=0; i<26; i++)
	    {
	        if(c[i]>x)
	            f = 1;
	    }
	    if(f)
	    {
	        if(str1=="-1")
	            cout<<0<<endl;
	        else
	            cout<<1<<endl;
	    }
	    else
	    {
    	    int a[26] = {0};
    	    int b[26] = {0};
    	    for(int i=0; i<str.length(); i++)
    	        a[str[i]-'a']+=1;
    	    for(int i=0; i<str1.length(); i++)
    	        b[str1[i]-'a']+=1;
    	        
    	    for(int i=0; i<26; i++)
    	        if(a[i]!=b[i])
    	            flag = 0;
    	    
    	    for(int i=0;i<str1.length();i++)
    	    {
    		    if(i>0)
    		        if(str1[i-1]==str1[i])
    			        flag=0;
    	    }
    	    if(flag==1)
    		    cout<<"1\n";
    	    else
    	        cout<<"0\n";
	    }
	}
    return 0;
}
// } Driver Code Ends