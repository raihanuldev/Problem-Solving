class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int cnt =0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                cnt++;
            }
        }
        return cnt;
    }
};