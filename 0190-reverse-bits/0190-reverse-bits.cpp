class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reversed=0;
        for(int i =0;i<32;i++){
            int lastbit=n&1;
            reversed=(reversed<<1)|lastbit;
            n>>=1;
        }
        return reversed;
    }
};