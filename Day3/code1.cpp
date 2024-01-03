//Date: 03/01/2024
// Link: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/?envType=daily-question&envId=2024-01-03

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int previousRowCount = 0;
        int total = 0;

        for (const std::string& row : bank) {
            int currentRowCount = calculateOnesCount(row);
            if (currentRowCount == 0)
                continue;

            total += currentRowCount * previousRowCount;
            previousRowCount = currentRowCount;
        }
        return total;
    }

private:
    int calculateOnesCount(const std::string& s) {
        int count = 0;
        for (char c : s)
            count += c - '0';

        return count;
    }

};
