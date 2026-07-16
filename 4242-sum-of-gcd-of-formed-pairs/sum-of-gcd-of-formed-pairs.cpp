class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>res;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            res.push_back(gcd(maxi,nums[i]));
        }
        sort(res.begin(),res.end());
        int n=res.size();
        long long ans=0;
        int i=0;
        int j=n-1;
        while(i<j){
            ans+=gcd(res[i],res[j]);
            i++;
            j--;
        }
        return ans;
    }
};