class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i =0;
        while(i != nums.size()){
            if(nums[i]==target){
                return i;
            }
            i++;
        }
        return -1;
    }
};