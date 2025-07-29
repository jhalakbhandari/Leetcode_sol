class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) { // n-1 passes
            bool swapped = false;         // optimization
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped)
                break; // if no swaps → array already sorted
        }
         vector<int> newarr;
        newarr.push_back(nums[0]); // add first element
        for (int k = 1; k < nums.size(); k++) {
            if (nums[k] != nums[k - 1]) { // only add unique
                newarr.push_back(nums[k]);
            }
        }
         if (newarr.size() < 3) {
            return newarr.back(); // largest element
        }

        // Return third max (from sorted ascending order)
        return newarr[newarr.size() - 3];
    }
};