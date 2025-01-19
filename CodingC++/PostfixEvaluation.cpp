#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfixEvaluation(string s){
    stack<int> st;
    for(int i=0;i<s.length();i++){ //also size_t i=0 can be used
        if(s[i]>='0' && s[i]<='9'){
        st.push(s[i]-'0'); //to get integer
        }else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
             switch(s[i]){
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            case '/':
                st.push(op1/op2);
                break;
                
        }
        }
       
    }
    return st.top();
}
int main(){
    cout<<postfixEvaluation("46+2/5*7+")<<endl;
    return 0;
}