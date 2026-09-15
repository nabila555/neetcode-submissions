class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       int arr_size=nums.size();
        set<int>s;{
        for(int i=0;i<nums.size();i++){
           s.insert(nums[i]);
        }
       int s_size=s.size();

       if(arr_size==s_size) return false;
    

       }

       return true;


    }


};