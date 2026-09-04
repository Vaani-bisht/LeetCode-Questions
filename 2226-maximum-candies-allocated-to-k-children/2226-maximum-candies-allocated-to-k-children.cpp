class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int low = 1;
        int high = *max_element(candies.begin() , candies.end());
        int ans = 0;

        while(high >= low){
            int mid = low + (high - low)/2;
            long long children = 0;

            for(int x : candies){
                children += x/mid;
            }

            if(children >= k){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid -1;
            }
        }
        return ans;
    }
};