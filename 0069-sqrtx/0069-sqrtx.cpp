class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x; // Handle small cases directly

        int left = 0, right = x;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long mid_squared = static_cast<long long>(mid) * mid; // Use long long to avoid overflow

            if (mid_squared == x) {
                return mid; // Return exact match
            } else if (mid_squared < x) {
                left = mid + 1; // Move to the right half
            } else {
                right = mid - 1; // Move to the left half
            }
        }
        return right; // right is the largest integer whose square is <= x
    }
};
