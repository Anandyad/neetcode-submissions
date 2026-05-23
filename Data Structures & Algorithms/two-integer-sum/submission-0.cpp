class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> compliment;
         for(int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];
            if(compliment.find(comp) != compliment.end()){
                return {compliment[comp],i};
            }
            compliment[nums[i]]=i;
        }
        return {};
    }
};
