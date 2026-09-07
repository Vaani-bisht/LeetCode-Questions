class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int i = 0;
        int count = 0;
        while(i < nums.size()){
            while(nums[i] > 0){
                int last_digit = nums[i] % 10;
                if(last_digit == digit){
                    count++;
                }
                nums[i] /= 10;
            }
            i++;
        }
        return count;
    }
};