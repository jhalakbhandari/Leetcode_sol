class Solution {
public:
    bool isHappy(int n) {
        std::unordered_set<int> seen; 
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);  // Mark the current number as seen
            int temp = 0;

            // Calculate the sum of the squares of the digits
            while (n != 0) {
                int x = n % 10;
                temp += x * x;  // Sum the square of each digit
                n /= 10;  // Integer division to move to the next digit
            }

            n = temp;  // Update n to the new sum
        }

        return n == 1;  // If we ended with 1, it's a happy number
    
    }
};