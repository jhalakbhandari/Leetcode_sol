class Solution {
public:
    bool isPalindrome(int x) {
    std::string numStr = std::to_string(x);
    int i;
    i=0;
    int j = numStr.length() - 1;
    while(j>i){
        if(numStr[i]!=numStr[j]){
            return false;
        }
        i++;
        j--;
    }
   
    return true;

    }
};