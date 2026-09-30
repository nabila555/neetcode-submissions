class Solution {
public:
    void sortColors(vector<int>& nums) {

        multiset<int> ms(nums.begin(), nums.end());

        int i = 0;

        for (int x : ms) {
            nums[i] = x;
            i++;
        }
    }
};