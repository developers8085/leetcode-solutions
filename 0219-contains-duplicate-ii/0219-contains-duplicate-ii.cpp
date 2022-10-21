class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // on2 solution done
        // on + on map
        
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!= mp.end()){
                if((abs(mp[nums[i]]-i)<=k)){
                    return true;
                }else{
                    mp[nums[i]]=i;
                }
            }else{
                mp[nums[i]]=i;
            }  
        }
        return false;
    }
};