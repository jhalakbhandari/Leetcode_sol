class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        string curr1 = "red";
        string curr2 = "blue";

        int lvl1 = 1, lvl2 = 1;
        int r1 = red, b1 = blue;
        int r2 = red, b2 = blue;

        // Start with red
        while ((curr1 == "red" && r1 >= lvl1) ||
               (curr1 == "blue" && b1 >= lvl1)) {
            if (curr1 == "red") {
                r1 -= lvl1;
                curr1 = "blue";
            } else {
                b1 -= lvl1;
                curr1 = "red";
            }
            lvl1++;
        }

        // Start with blue
        while ((curr2 == "red" && r2 >= lvl2) ||
               (curr2 == "blue" && b2 >= lvl2)) {
            if (curr2 == "red") {
                r2 -= lvl2;
                curr2 = "blue";
            } else {
                b2 -= lvl2;
                curr2 = "red";
            }
            lvl2++;
        }

        return max(lvl1 - 1, lvl2 - 1);
    }

}
;