class Solution {
public:
    void waviness(string nums,int &count){
        for(int i=1;i<nums.size()-1;i++){
            if((nums[i]>nums[i+1] && nums[i]>nums[i-1] )|| (nums[i]<nums[i+1] && nums[i]<nums[i-1]) ){
                count++;
            }
        }
    }
    int totalWaviness(int num1, int num2) {
        int count=0;
        for(int i=num1;i<=num2;i++){
            string nums=to_string(i);
            waviness(nums,count);
        }
        return count;
    }
};