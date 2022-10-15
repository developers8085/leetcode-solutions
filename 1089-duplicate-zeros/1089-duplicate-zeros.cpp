class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        for(int i= n-1;i>=0;i--){
            st.push(arr[i]);
        }
        int i=0;
        while(i<n){
            if(st.top()!=0){
                arr[i++]=st.top(); st.pop();
            }else{
                int count=0;
                while(!st.empty() && st.top()==0){
                    count++;
                    st.pop();
                }
                count = count*2;
                while(i<n &&count>0){
                    arr[i++]=0;
                    count--;
                }
            }
        }
    }
};