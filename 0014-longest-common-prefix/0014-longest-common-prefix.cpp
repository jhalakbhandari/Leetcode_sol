class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if(strs.empty()){
            return "";
        }
        string word=strs[0];
        for(int i=0; i<word.length();++i){
            for(auto j=strs.begin()+1; j!=strs.end(); ++j ){
                if((*j).length()<=i || (*j)[i]!=word[i]){
                    return word.substr(0,i);
                }
            }
        }
        	return word;
    }
};