class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int count = 0;
        int n = batteryPercentages.size();
        for(int i = 0 ; i < n ;i++){
            if(batteryPercentages[i] - count > 0){
                count++;
            }
        }
        return count;
    }
};