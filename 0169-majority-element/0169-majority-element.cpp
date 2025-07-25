class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> counts;
        int majorityCount =nums.size()/2;

        for(int num:nums){
            counts[num]++;
            if(counts[num]>majorityCount){
                return num;
            }
        }
        return -1;
    }
};