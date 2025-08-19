class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        //Count frequencey of each number
        for(int num:nums){
            freq[num]++;
        }
        int longest=0;

        for(auto& [num,count]:freq){
            if(freq.find(num+1)!=freq.end()){
                longest = max(longest,count +freq[num+1]);
            }
        }
        return longest;
    }
};