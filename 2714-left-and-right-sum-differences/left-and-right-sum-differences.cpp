class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftsum(n,0);
        vector<int>rightsum(n,0);
        vector<int>result(n,0);
        for(int i=0;i<n-1;i++){
            leftsum[i+1]=nums[i]+leftsum[i];
        }
        for(int i=n-1;i>0;i--){
            rightsum[i-1]=nums[i]+rightsum[i];
        }
        for(int i=0;i<n;i++){
            result[i]=abs(leftsum[i]-rightsum[i]);
        }
        return result;
    }
};