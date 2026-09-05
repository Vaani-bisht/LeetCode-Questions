class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = 1;
        long long minTime = *min_element(time.begin() , time.end());
        long long high = minTime * totalTrips;

        while(low <= high){
            long long mid = low + (high - low) / 2;

            long long trip = 0;
            for(int t : time){
                trip += mid / t; 

                if(trip >= totalTrips)
                    break;
            }

            if(trip >= totalTrips){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};