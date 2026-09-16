class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       map<int,int>m;
       for(int x:nums){
        m[x]=1;
       }
       int cnt=0;
       int l=0;
       int p=-1;

       for(auto x:m){
        if(cnt==0|| x.first==p+1) cnt++;

        else cnt=1;

        l=max(l,cnt);
        p=x.first;
       }
       return l;
        
    }
};


