class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> mapNum;
        for(int num:nums){
            mapNum[num]++;
            
        }
        for(int i=0; i<=nums.size();i++){
            if(mapNum.find(i)==mapNum.end()){
                return i;
            }
        }
        return 0;
    }
};