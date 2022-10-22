class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int ans = 0;
        map<int,int> mp;
        int c_sum =0;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }else{
                nums[i]=1;
            }
        }
        mp[0]=0;
        for(int i=0;i<n;i++){
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