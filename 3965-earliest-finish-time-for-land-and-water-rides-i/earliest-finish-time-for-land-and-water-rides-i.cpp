class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int n = landStartTime.size();
        int m = waterStartTime.size();

        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                // Land -> Water
                int landEnd = landStartTime[i] + landDuration[i];
                int finish1 = max(landEnd, waterStartTime[j]) + waterDuration[j];

                // Water -> Land
                int waterEnd = waterStartTime[j] + waterDuration[j];
                int finish2 = max(waterEnd, landStartTime[i]) + landDuration[i];

                ans = min(ans, min(finish1, finish2));
            }
        }

        return ans;
    }
};