class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //use hashmap to hold seen values and their indexes
        std:unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int lookup = target - nums[i]; 
            //look if needed addition value is in map to equal target
            if(seen.find(lookup) != seen.end()) return{seen[lookup], i};
            //if it doesnt exist, add value to map with index
            seen[nums[i]] = i;
        }
        //if no values exist, return empty vector
        return {};
    }
};