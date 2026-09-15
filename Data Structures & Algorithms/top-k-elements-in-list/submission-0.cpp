/*1. count frequency
  2.store number & frequency
  3.sort by frequency
  4.return 1st k numbers */


bool comp(pair<int,int>a, pair<int,int>b){
    return a.second>b.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         map<int,int>m;

         for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
         }
        
        vector<pair<int,int>>p;

        for(auto v:m){
            p.push_back({v.first,v.second});

        }

        sort(p.begin(),p.end(),comp);

        vector<int>ans;

        for(int i=0;i<k;i++){
            ans.push_back(p[i].first);
        }
        return ans;

        
    }
};
