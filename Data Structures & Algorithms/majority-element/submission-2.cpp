class Solution {
public:
    int majorityElement(vector<int>& nums) {

        multiset<int> ms(nums.begin(), nums.end());

        auto it = ms.begin();

        advance(it, nums.size() / 2);

        return *it;
    }
};