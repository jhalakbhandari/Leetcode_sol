class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    int gcdOfOddEvenSums(int n) {
         int sumOdd = 0, sumEven = 0; 
        int k = 2 * n;
        while (k != 0) {
            if (k % 2 == 0) {
                sumEven += k;
            } else {
                sumOdd += k;
            }
            k--;
        }
        int ans=gcd(sumOdd,sumEven);
        return ans;
    }

};