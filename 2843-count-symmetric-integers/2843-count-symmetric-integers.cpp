class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for(int x = low ; x <= high ; x++){
            string s = to_string(x);
            int n = s.size();

            if(n % 2 != 0){
                continue;
            }
            int mid = n/2;
            int leftSum = 0 , rightSum = 0;

            for(int i = 0 ; i < mid ; i++){
                leftSum += s[i] - '0';
            }

            for(int i = mid ; i < n ; i++){
                rightSum += s[i] - '0';
            }
            if(leftSum == rightSum){
                count++;
            }
        }
        return count;
    }
};