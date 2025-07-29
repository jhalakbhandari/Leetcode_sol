class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map1;
        unordered_map<int, int> map2;

        for (int num : nums1) {
            map1[num]++;
        }
        for (int number : nums2) {
            map2[number]++;
        }
        vector<int> result;
        for (auto& [key, freq1] : map1) {
            if (map2.count(key)) { // key exists in map2
                int freq2 = map2[key];
                int commonCount = min(freq1, freq2);

                // Add key commonCount times
                for (int i = 0; i < commonCount; i++) {
                    result.push_back(key);
                }
            }
        }

        return result;
    };
};