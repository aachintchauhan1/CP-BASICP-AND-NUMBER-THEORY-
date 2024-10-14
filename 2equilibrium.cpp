class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) {
        // Your code here
         long long sum=0,leftsum=0;
         
         for(int i=0;i<arr.size();i++){
             sum+=arr[i];
         }
         
         for(int i=0;i<arr.size();i++){
             
             long long rightsum;
             
             rightsum=sum-leftsum-arr[i];
             
             if(leftsum==rightsum)
             return i+1;
             
             leftsum=leftsum+arr[i];
         }
        return -1;
    }
};