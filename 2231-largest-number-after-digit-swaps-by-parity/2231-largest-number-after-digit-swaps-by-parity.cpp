class Solution {
public:
    int largestInteger(int n) {
        priority_queue<int,vector<int>,greater<int>> p1;
        priority_queue<int,vector<int>,greater<int>> p2;
        
        int tmp = n;
        
        while(tmp>0){
            int rem = tmp%10;
            if(rem%2==0){
                p1.push(rem);
            }else{
                p2.push(rem);
            }
            tmp= tmp/10;
        }
        int ans = 0;
        long mul = 1;
        while(!p1.empty() && !p2.empty()){
            int rem = n%10;
            if(rem % 2 ==0){
                ans = ans + p1.top()*mul; p1.pop();
            }else{
                ans = ans + p2.top()*mul; p2.pop();
            }
            n = n/10;
            mul = mul * 10;
        }
        
        while(!p1.empty()){
            ans = ans + p1.top()*mul; p1.pop();
            mul = mul*10;
        }
        while(!p2.empty()){
            ans = ans + p2.top()*mul; p2.pop();
            mul = mul*10;
        }
        
        return ans;
    }
    int basicSol(int num){
        vector<int> even;
        vector<int> odd;
        vector<int> tmp;
        while(num>0){
            if((num%10)%2==0){
                even.push_back(num%10);
            }else{
                odd.push_back(num%10);
            }
            tmp.insert(tmp.begin(),num%10);
            num = num/10;
        }
        sort(even.rbegin(),even.rend());
        sort(odd.rbegin(),odd.rend());
        
        int index = 0;
        int i=0;
        int j=0;
        int ans = 0;
        while(i<even.size() && j < odd.size()){
            if(tmp[index]%2 ==0){
                ans = ans*10 + even[i++];
            }else{
                ans = ans*10 + odd[j++];
            }
            index++;
        }
        
        while(i<even.size()){
            ans = ans*10 + even[i++];
        }
        while(j<odd.size()){
            ans = ans*10 + odd[j++];
        }
        return ans;
    }
};