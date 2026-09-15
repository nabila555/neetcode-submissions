class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
         map<string, vector<string>>m;

        for(string s:strs) {
 
         string k=s;
         sort(k.begin(), k.end());
         m[k].push_back(s);
        }
      vector<vector<string>> ans;
      for(auto x : m) {
          ans.push_back(x.second);
        }
 return ans;
        
    }
};
