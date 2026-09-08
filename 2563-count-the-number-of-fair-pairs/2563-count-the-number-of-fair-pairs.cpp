class Solution {
public:

    long long pairs(vector<int>& nums , int target){
        int left = 0;
        int right = nums.size() - 1;
        long long count = 0;

        while(left < right){
            int sum = nums[left] + nums[right];

            if(sum <= target){
                count += right - left;
                left++;
            }else
                right--;
        }
        return count;
    }

    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin() , nums.end());
        return pairs(nums,upper) - pairs(nums , lower -1);
    }
};