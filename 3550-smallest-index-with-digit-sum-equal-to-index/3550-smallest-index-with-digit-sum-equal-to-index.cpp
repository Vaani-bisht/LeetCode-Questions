class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int minIndex = -1;

        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int sum = 0;

            while(num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }

            if(sum == i) {
                minIndex = i;
                break;
            }
        }
        return minIndex;
    }
};