class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);  // Initialize all elements to 1

        // Build the triangle row by row
        for (int i = 0; i < rowIndex; i++) {
            // Fill in the middle elements of the row
            for (int j = i; j >0; j--) {
                row[j] += row[j - 1];
            }

        }

        return row;
    }
};