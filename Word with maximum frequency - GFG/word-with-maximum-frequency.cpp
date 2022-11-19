//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}

// } Driver Code Ends


string maximumFrequency(string s){
        map<string, int> mp;
        int n = s.size();
        vector <string> tokens;
        stringstream check1(s);
        string intermediate;
        while(getline(check1, intermediate, ' ')){
            tokens.push_back(intermediate);
        }
        int size = tokens.size();
        for(int i=0;i<size;i++){
            mp[tokens[i]]++;
        }
        int maxC=0;
        string ans="";
        for(int i=0;i<size;i++){
            if(mp[tokens[i]]>maxC){
                ans = tokens[i]+" "+to_string(mp[tokens[i]]);
                maxC = mp[tokens[i]];
            }
        }
        return ans;
}

