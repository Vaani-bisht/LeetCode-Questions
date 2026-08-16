class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalSum = 0;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            totalSum += nums[i];
        }

        if(totalSum % 2 == 0){
            return n-1;
        }else{
            return 0;
        }
        return 1;
    }
};