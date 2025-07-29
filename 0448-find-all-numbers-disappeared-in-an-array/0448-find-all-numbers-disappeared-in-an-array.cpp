class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mm;
        vector<int>missing;
        for(int num:nums){
            mm[num]++;
        }
        for(int i=1;i<=nums.size();i++){
             if (mm.find(i) == mm.end()) {
                missing.push_back(i);
             }
        }
        return missing;
    }
};