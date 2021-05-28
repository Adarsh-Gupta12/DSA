//link https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int a[], int n){
        
        long long int max=-pow(10,14),curr_sum=0;
        int i;
        for(i=0;i<n;i++){
            curr_sum+=a[i];
            if(max<curr_sum)
                max=curr_sum;
            if(curr_sum<0)
                curr_sum=0;
        }
        return max;
    }
};
