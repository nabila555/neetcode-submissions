class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {

        int left=1;
        int right=*max_element(p.begin(),p.end());

        while(left<right){
            int mid=left+(right-left)/2;

            long long hrs=0;

            for(int pl:p){
                hrs+=(pl+mid-1)/mid;
            }

            if(hrs<=h){
                right=mid;
            }
            else left=mid+1;
        }

        return left;
        
    }
};
