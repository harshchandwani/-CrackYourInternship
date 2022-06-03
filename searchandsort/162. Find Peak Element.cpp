class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low=0, high = n-1;
        int ans=0;
        while(low<=high){
            if(nums[low] >= nums[high] && nums[ans] <= nums[low]){
                ans = low;
            }
            else if(nums[high] >= nums[low] && nums[ans] <= nums[high]){
                ans = high;
            }
            
            high--;
            low++;
        }
            return ans;
    }
};