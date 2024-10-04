class Solution {
public:
    int hammingWeight(int n) {
       int count=0;
        
        while(n>0){
            int ans=n%2;
            if(ans==1){
                count ++;
            }
            n=n/2;
        }
        return count;
    }
};