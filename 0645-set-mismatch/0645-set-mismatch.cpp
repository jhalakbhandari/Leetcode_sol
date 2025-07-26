class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> countNum;
        int dup = -1, miss = -1;

        for(int num:nums){
            if(++countNum[num]==2) dup=num;
        }

        for(int i =1;i<=nums.size();++i){
            if(!countNum.count(i)){
                miss=i;
                break;
            }
        }
        return {dup, miss};
    }
};