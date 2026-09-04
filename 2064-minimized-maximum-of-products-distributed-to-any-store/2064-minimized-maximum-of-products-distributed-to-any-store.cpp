class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low = 1;
        int high = *max_element(quantities.begin() , quantities.end());
        
        while(low <= high){
            int stores = 0;
            int mid = low + (high - low) / 2;

            for(int q : quantities){
                stores +=  (q + mid - 1) / mid;
            }

            if(stores <= n){
                high = mid - 1;
            }else
                low = mid + 1;
        }
        return low;
    }
};