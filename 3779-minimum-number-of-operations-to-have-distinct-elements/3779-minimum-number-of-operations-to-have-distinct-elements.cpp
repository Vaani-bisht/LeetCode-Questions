class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int ,int> freq;
        int duplicates = 0;

        for(int i :nums){
            freq[i]++;

            if(freq[i] == 2){
                duplicates++;
            }
        }

        int operations = 0;
        int i = 0;

        while(duplicates > 0){
            for(int j = 0 ; j < 3 && i <nums.size() ; j++ ,i++){
                int x = nums[i];

                if(freq[x] == 2){
                    duplicates--;
                }
                freq[x]--;
            }
            operations++;
        }
        return operations;
    }
};