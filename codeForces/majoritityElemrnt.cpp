class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        int n=nums.size();
        for(auto element:mp){
            if(element.second > n/2){
                return element.first;
            }
        }
        return -1;
    }
};