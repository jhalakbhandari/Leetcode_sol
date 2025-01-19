#include<iostream>
#include<algorithm> //for reverse function
using namespace std;
// space complexity=O(n)
//time complexity = 
string decodedString(string s){
    string result="";
    for(size_t i=0;i<s.length();i++){
        if(s[i]!=']'){
            result.push_back(s[i]);
        }else{
            string str="";
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();
            }

            //reversing the string
            reverse(str.begin(),str.end());

            //remove last char frm result which is [
            // result.pop_back();
            if (!result.empty()) result.pop_back();


            //extract num from result
            string num="";
            while(!result.empty() && isdigit(result.back())){
                num.push_back(result.back());
                result.pop_back();

            }
            //reversing
            reverse(num.begin(),num.end());

            //convert string to num
            int int_num=stoi(num);
            //inserting in reult int_num times
            while(int_num){
                result+=str;
                int_num--;
            }


            }
    }
    return result;

};

int main()
{
    string str;
    cin>>str;
    cout<<decodedString(str)<<endl;
    return 0;
}