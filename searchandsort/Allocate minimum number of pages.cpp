class Solution 
{
    public:
    //Function to find minimum number of pages.
   bool fun(int arr[] , int n, int m, int ans){
        int req= 1 , sum =0;
        for(int i=0;i<n;i++){
            if(sum + arr[i] > ans){
                req++;
                sum = arr[i];
            }
            else{
                sum += arr[i];
            }
           
        }
         return (req <= m);
    }
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int m) 
    {
        int sum=0, mx = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            mx = max(mx, arr[i]);
        }
        int low = mx , high = sum, res=0;
        while(low <= high){
            int mid = (low+high)/2;
            if(fun(arr, n , m ,mid)){
                res = mid;
                high = mid -1;
            }
            else{
                low = mid +1;
            }
        }
        return res;
        //code here
    }
};