#include <iostream>
#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> dupe_table;
        for (const auto& i : nums) {
            if (auto search = dupe_table.find(i); search != dupe_table.end())
                return true;
            else
                dupe_table[i] = 1;
        }
        return false;
    }
};