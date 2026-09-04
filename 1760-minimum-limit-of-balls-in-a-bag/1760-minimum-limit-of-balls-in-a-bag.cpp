class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low = 1 , high = *max_element(nums.begin() , nums.end());
        int ans = high;

        while(low <= high){
            int mid = low + (high - low)/2;
            int operations = 0;

            for(int x : nums){
                operations += (x - 1)/mid;

                if(operations > maxOperations)break;
            }
            if(operations <= maxOperations){
                ans = mid;
                high = mid - 1; 
            }else{
                low = mid + 1;
            }
        }    
        return ans;
    }
};