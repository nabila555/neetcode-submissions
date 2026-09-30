class Solution {
public:
    void sortColors(vector<int>& nums) {

        multiset<int> s;

        for (int x : nums) {
            s.insert(x);
        }

        int i = 0;

        for (int x : s) {
            nums[i] = x;
            i++;
        }
    }
};