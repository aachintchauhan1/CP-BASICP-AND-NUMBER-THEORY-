class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        for (int i=0;i<k;i++){
           
            int x=updates[i]-1;
            a[x]++;
        }
        
        // \\\
        
        for(int i=1;i<n;i++){
            
            a[i]+=a[i-1];
            
        }
        // Your code goes here
    }
};