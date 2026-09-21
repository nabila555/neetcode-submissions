/* a^a=0
   a^0=a

   so arr[0 ,1,2,3]
     nums[😑,1,2,3]


      */



class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int ans=nums.size();

        for(int i=0;i<nums.size();i++){
            ans=ans^i^nums[i];

        }

        return ans;
        
    }
};
