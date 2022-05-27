class Solution {
public:
    int missingNumber(vector<int>& arr) {
        
        int i=0;
        while(i < arr.size() ){
            if(arr[i] < arr.size() && arr[i] != arr[arr[i]]){
                swap(arr[i], arr[arr[i]]);
            }
            else{
                i++;
            }
        }
        for(int j=0;j<arr.size();j++){
            if(arr[j] != j){
                return j;
            }
        }
        return arr.size();
    }
};