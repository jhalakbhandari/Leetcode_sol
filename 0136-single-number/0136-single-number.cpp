class Solution {
public:
    int singleNumber(vector<int>& nums) {
     std::vector<int> bit(nums.size(), 1); 
        
        if(nums.size() == 1) {
            return nums[0];  // If there's only one element, return it
        }

        // Compare elements in the 'nums' array
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = 0; j < nums.size(); ++j) {
                if(j != i && nums[i] == nums[j]) {
                    bit[i] = 1;  // Mark as found (you were using '==' which is comparison, not assignment)
                    break;       // If a match is found, no need to keep checking
                } else {
                    bit[i] = 0;  // Mark as unique
                }
            }
        }

        // Find the unique number
        for(int k = 0; k < bit.size(); ++k) {
            if(bit[k] == 0) {
                return nums[k];  // Return the unique number
            }
        }

        return -1;  // Return a default value in case no single number is found (shouldn't happen based on the problem)
    }
};