class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> indices;
        for (int i = 0; i < nums.size(); i++) {
            indices[nums[i]] = i; // {3:0, 4:1, 5:2, 6:3}
        }

        for (int j = 0; j < nums.size(); j++) {
            int difference = target - nums[j]; // 4, 3, 2, 1
            if (indices.count(difference) && indices[difference] != j) // 1, 1, 0, 0 and 1 true, 0 true, false, false
                return {j, indices[difference]}; // {}
        }

        return {};
    }
};
