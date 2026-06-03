class Solution {
public:
    int finish_Time(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration){
        int fin1=INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            fin1=min(fin1,landStartTime[i]+landDuration[i]);
        }
        int fin2=INT_MAX;
        for(int i=0;i<waterStartTime.size();i++){
            fin2=min(fin2,max(fin1,waterStartTime[i])+waterDuration[i]);
        }
        return fin2;
    }
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        // land->water
       int Land_water= finish_Time(landStartTime,landDuration,waterStartTime,waterDuration);
       int Water_Land= finish_Time(waterStartTime,waterDuration,landStartTime,landDuration);
       return min(Land_water,Water_Land);
    }
};