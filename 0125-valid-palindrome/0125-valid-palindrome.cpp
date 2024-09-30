class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(std::remove_if(s.begin(), s.end(),
                               [](unsigned char c) {
                                   return !std::isalnum(
                                       c); // Remove non-alphanumeric characters
                               }),
                s.end());

        // Convert the remaining characters to lowercase
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};