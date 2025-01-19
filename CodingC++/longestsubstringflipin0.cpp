// Given a binary string and an integer k, return the maximum number of consecutive 1's in the string if you can flip at most k 0's;
//sliding window array; we expand when condition true and reduce when condition false;
//time complexity = O(n)
//space complexity = O(1)

#include<iostream>
using namespace std;
int longestSubstring(string s, int k){
    size_t start=0;
    size_t end=0;
    int max_length=0;
    int zerocount=0;
    for(;end<s.length();end++){
        if(s[end]=='0'){
            zerocount++;
        }
        while(zerocount>k){
            if(s[start]=='0' ) zerocount--;
            start++;
        }

        max_length=max(max_length,int(end-start+1));
    }
    return max_length;
}
int main()
{
    string s;
    int k;
    cin>>s>>k;

    cout<<longestSubstring(s,k)<<endl;

    return 0;
}