class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>v;
        v.push_back(1);
        for(int i=2;i<(n/2)+1;i++){
            if(n%i == 0){
                v.push_back(i);
            }
        }
        v.push_back(n);
        if(k > v.size()){
            return -1;
        }
        return v[k-1];
    }
};