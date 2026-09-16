/*class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>>s;
    
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){

                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);

                }
                }
            }
        }
         vector<vector<int>>ans(s.begin(),s.end());
        return ans;
        
    }
}; */



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());
    
        for(int i=0;i<nums.size()-2;i++){

            if(i>0 && nums[i]==nums[i-1]) continue;

            int l=i+1;
            int r=nums.size()-1;

            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];

            if(sum==0){
                ans.push_back({nums[i],nums[l],nums[r]});
            

            while(l<r && nums[l]==nums[l+1])
            l++;

            while(l<r && nums[r]==nums[r-1]) r--;

            l++;
            r--;

            }
            else if(sum<0){
                l++;
            }

            else r--;

            }
        } 

return ans;
               
        
    }
};

