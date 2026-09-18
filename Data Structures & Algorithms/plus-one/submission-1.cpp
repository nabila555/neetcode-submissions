class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

         vector<int>v;
         long long n=0;

        for(int d:digits){
            n=n*10+d;
        }
        n=n+1;

        while(n>0){
            v.push_back(n%10);
            n=n/10;
        }

        reverse(v.begin(),v.end());

        return v;

        
    }
};
