class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int j=0;
        int n = chars.size();
        while(i<n){
            int count =0;
            char curr = chars[i];
            while(i<n && curr==chars[i]){
                i++;
                count++;
            }
            chars[j++] = curr;
            if(count != 1){
                string cs = to_string(count);
                for(auto x: cs){
                    chars[j++]=x;
                }
            }
        }
        return j;
    }
};