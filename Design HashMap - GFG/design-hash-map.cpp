//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class MyHashMap {
    int hs[10000+1]={0};
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        memset(hs,0,sizeof(hs));
    }

    /** value will always be non-negative. */
    void put(int key, int value) {
        hs[key]=value;
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        if(hs[key] !=0){
            return hs[key];
        }
        return -1;;
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        hs[key]=0;
    }

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        MyHashMap obj;
        int q;
        cin >> q;
        while (q--) {
            string s;
            cin >> s;
            if (s == "put") {
                int key, val;
                cin >> key >> val;
                obj.put(key, val);
            }
            else if ( s == "remove") {
                int key;
                cin >> key;
                obj.remove(key);
            }
            else {
                int key;
                cin >> key;
                cout << obj.get(key) << endl;
            }
        }
}
    return 0;
}

// } Driver Code Ends