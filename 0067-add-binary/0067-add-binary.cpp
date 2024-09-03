class Solution {
public:
    string addBinary(string a, string b) {
        std::string result;
        int carry =0;
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>=0||j>=0||carry){
            int bitA=(i>=0)?a[i]-'0':0;\
            int bitB=(j>=0)?b[j]-'0':0;

            int Sum=bitA+bitB+carry;
            carry=Sum/2;
            result.push_back((Sum%2)+'0');

            i--;
            j--;
        }
        std::reverse(result.begin(),result.end());
        return result;
    }
};