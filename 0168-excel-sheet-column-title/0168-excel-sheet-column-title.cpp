class Solution {
public:
    string convertToTitle(int columnNumber) {
        std::string result;
        while(columnNumber>0){
            columnNumber--;
            int remainder=columnNumber%26;
            result+=(remainder+'A');
            columnNumber/=26;
        }
        std::reverse(result.begin(), result.end());
    
        return result;
    }
};