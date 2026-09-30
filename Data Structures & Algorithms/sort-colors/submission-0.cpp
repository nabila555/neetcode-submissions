class Solution {
public:
    void sortColors(vector<int>& nums) {
        
         quicksort(nums, 0, nums.size() - 1);

    }

     int partition(vector<int>& A, int l, int h){

       int i=l; int j=h;
        int pivot=A[i];


       { 
        while(i<j){

            while(i<=j && A[i]<=pivot){i++;}
            while(i <= j && A[j]>pivot){j--;}

            if(i<j) swap(A[i],A[j]);
        }
       
       }

       swap(A[l],A[j]);
       return j; 


       }

       void quicksort(vector<int>& A, int l, int h) {

        if (l < h) {

            int j = partition(A, l, h);

            quicksort(A, l, j-1);
            quicksort(A, j + 1, h);
        }
    }

  
    
    
};