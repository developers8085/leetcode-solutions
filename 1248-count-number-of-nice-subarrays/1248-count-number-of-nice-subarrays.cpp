class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int ans = 0;
        map<int,int> mp;
        int c_sum =0;
        int n = nums.size();
        mp[0]=0;
        for(int i=0;i<n;i++){
            nums[i] = nums[i]&1;
            c_sum = c_sum +nums[i];
            if(c_sum ==k)
                ans++;
            if(mp.find(c_sum-k) != mp.end())
                ans = ans + mp[c_sum-k]; 
            mp[c_sum]++;
        }
        return ans;
    }
};