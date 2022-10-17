class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> set;
        
        for(int i=0;i<sentence.size();i++){
            set.insert(sentence[i]);
        }
        if(set.size()==26)
            return true;
        else
            return false;
        
    }
    int counterMethod(string sentence){
        int count[26];
        memset(count,0,sizeof(count));
        bool ans = true;
        int n = sentence.size();
        for(int i=0;i<n;i++){
            count[sentence[i]-97]++;
        }
        for(int i=0;i<26;i++){
            if(count[i]<=0)
                return false;
        }
        return ans;
    }
};