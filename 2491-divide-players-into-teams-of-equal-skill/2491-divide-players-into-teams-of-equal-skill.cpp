class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin() , skill.end());
        int left = 0;
        int right = skill.size() - 1;

        int teamSkill = skill[left] + skill[right];

        long long chemistry = 0;
        while(left < right){
            int currentSkill = skill[left] + skill[right];

            if(currentSkill != teamSkill){
                return -1;
            }

            chemistry += (long long)skill[left] * skill[right];
            left++;
            right--;
        }
        return chemistry;
    }
};