class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        multiset<int> m;
        for(int x:nums){
            if(m.find(x)!=m.end()){
                return true;
            }
        m.insert(x);
        }
        return false;
    }
};