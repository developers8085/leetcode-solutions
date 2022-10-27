//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    priority_queue<int> p1;
    priority_queue<int> p2;
    public:
    //Function to insert heap.
    void insertHeap(int &x)
    {
        p1.push(x);
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
        int temp = p1.top();
                  p1.pop();
        p2.push(-1 * temp);
        if (p2.size() > p1.size()) {
            temp = p2.top();
                  p2.pop();
            p1.push(-1 * temp);
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(p1.size()!=p2.size()){
            return double(p1.top());
        }else{
            
            return double((p1.top()-p2.top())/2.0);
        }
    }
};


//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends