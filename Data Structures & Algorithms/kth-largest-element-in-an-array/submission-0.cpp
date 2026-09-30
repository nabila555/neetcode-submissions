class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

         int l = 0;
        int h = nums.size() - 1;

        int target = nums.size() - k;

        while (l <= h) {

            int j = partition(nums, l, h);

            if (j == target) {
                return nums[j];
            }

            else if (j > target) {
                h = j - 1;
            }

            else {
                l = j + 1;
            }
        }

        return -1;
    }
        
    


    int partition(vector<int>& A, int l, int h) {

        int i = l;
        int j = h;
        int pivot = A[i];

        while (i < j) {

            while (i <= j && A[i] <= pivot) {
                i++;
            }

            while (i <= j && A[j] > pivot) {
                j--;
            }

            if (i < j) {
                swap(A[i], A[j]);
            }
        }

        swap(A[l], A[j]);

        return j;
    }
};
