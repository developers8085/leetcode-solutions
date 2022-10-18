class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i=1;i<n;i=i+2){
            int count = nums[i-1];
            while(count>0){
                ans.push_back(nums[i]);
                count--;
            }
        }
        return ans;
    }
};