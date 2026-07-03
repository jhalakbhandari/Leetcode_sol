class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int i = 0;
        int j = 0;
        int length = intervals.size();
        int currentStart,currentEnd;
        sort(intervals.begin(), intervals.end());
       
            currentStart = intervals[0][0];
            currentEnd = intervals[0][1];
            for (int i = 1; i < intervals.size(); i++) {
                if (currentEnd >= intervals[i][0]) {
                    currentEnd = max(currentEnd, intervals[i][1]);
                }else{
                     // No overlap
                    ans.push_back({currentStart, currentEnd});

                    // Start a new interval
                    currentStart = intervals[i][0];
                    currentEnd = intervals[i][1];
                }
            }
            ans.push_back({currentStart, currentEnd});
        

        return ans;
    }
};