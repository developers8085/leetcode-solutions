//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int n, vector<int> &asteroids) {
        stack<int> s;
        for(int i=0;i<n;i++){
            if(s.empty()){
                s.push(asteroids[i]);
            }else if(!s.empty()){
                if(s.top()<0){
                    s.push(asteroids[i]);
                }else{
                    if(asteroids[i]>=0){
                        s.push(asteroids[i]);
                    }else{
                        bool flg = true;
                        while(!s.empty() && s.top()>=0 && s.top()<=abs(asteroids[i])){
                            if(s.top()==abs(asteroids[i])){
                                flg = false;
                                s.pop();
                                break;
                            }
                            s.pop();
                        }
                        if(flg ==true && (s.empty() || s.top()<0)){
                           s.push(asteroids[i]);   
                        }
                    }
                }
            }
        }
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends