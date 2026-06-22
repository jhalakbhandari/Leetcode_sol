class Solution {
public:
    int addDigits(int num) {
        int q =num/10 ,r;
        int test=num;
        while(q!=0){
            int r = test %10;
            test = q+r;
            q=test/10;
        }
        return test;
    }
};