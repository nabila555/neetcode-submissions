/* a=4,b=7
   0100
 & 0111
 __________
  c=0100

  0100
^ 0111
__________
b=0011

a=1000  
        ...2nd iteration😞

*/




class Solution {
public:
    int getSum(int a, int b) {

        while(a!=0){
            int c=a&b;
            b=a^b;

            a=c<<1;

        }
        
        return b;
    }
};
