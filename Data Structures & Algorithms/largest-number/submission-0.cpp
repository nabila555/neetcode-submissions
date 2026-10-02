class Solution {
public:

    struct Compare {
        bool operator()(string a, string b) const {
            return a + b > b + a;
        }
    };

    string largestNumber(vector<int>& nums) {

        multiset<string, Compare> ms;

        for (int x : nums) {
            ms.insert(to_string(x));
        }

        string ans = "";

        for (string x : ms) {
            ans += x;
        }

        if (ans[0] == '0')
            return "0";

        return ans;
    }
};