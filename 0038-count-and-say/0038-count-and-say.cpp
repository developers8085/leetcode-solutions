class Solution {
public:
    string countAndSay(int n) {
        int i=0;
        
        string v1;
        string v2;
        v1="1";
        while(n>1){
            int size = v1.size();
            v2="";
            if(size ==1){
                v2="1";
                v2+=v1[0];
            }else{
                int count = 1;
                for(int i=1;i<size;i++){
                    if(v1[i-1]==v1[i]){
                        count++;
                    }else{
                        v2 = v2 +to_string(count);
                        v2 += v1[i-1];
                        count=1;
                    }
                }
                v2 = v2 +to_string(count);
                v2 += v1[size-1];
            }
            n--;
            v1=v2;
        }
        return v1;
    }
};