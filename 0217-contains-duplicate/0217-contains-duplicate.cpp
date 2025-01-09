class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      
        std::unordered_set<int> frequencyMap;
        for (int num : nums) {
             if (frequencyMap.find(num) != frequencyMap.end()) {
                return true;
            }
            // Otherwise, add the number to the set
            frequencyMap.insert(num);
        }
        return false;
    }
};