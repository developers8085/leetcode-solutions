class Solution {
public:
    int largestInteger(int num) {
        
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