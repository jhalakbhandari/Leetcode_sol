class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum =0;
        int currMax=0, maxSum =INT_MIN;
        int currMin = 0,minSum=INT_MAX;
        for(int num:nums){
            totalSum+=num;
            currMax += num;
            if (currMax > maxSum) maxSum = currMax;
            if (currMax < 0) currMax = 0;
            currMin += num;
            if (currMin < minSum) minSum = currMin;
            if (currMin > 0) currMin = 0;
        }
        if (maxSum < 0) return maxSum;
        return max(maxSum,totalSum-minSum);
        }
};