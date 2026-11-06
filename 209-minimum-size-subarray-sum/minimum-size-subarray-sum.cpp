class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int min_l=INT_MAX;
        int i=0,j=0;
        int sum=0;
        while(j<n){
            sum+=nums[j];

            while(sum>=target){
                min_l=min(min_l,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return min_l==INT_MAX ? 0 :min_l;
    }
};