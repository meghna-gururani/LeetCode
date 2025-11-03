class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int totalTime = 0;
        int i = 0;

        while (i < n) {
            int j = i;
            int groupSum = 0;     // total time in the same color group
            int groupMax = 0;     // max removal time in this group

            // Process all consecutive balloons of same color
            while (j < n && colors[j] == colors[i]) {
                groupSum += neededTime[j];
                groupMax = max(groupMax, neededTime[j]);
                j++;
            }

            // To keep rope colorful, we must remove all but one balloon in the group
            totalTime += (groupSum - groupMax);

            // Move to next color group
            i = j;
        }

        return totalTime;
    }
};
