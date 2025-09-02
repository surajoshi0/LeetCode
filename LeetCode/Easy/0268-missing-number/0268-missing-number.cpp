class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int arrsum=0;
        int originalsum=n*(n+1)/2;
        
        for(int i=0;i<n;i++){
            arrsum+=arr[i];
        }
        return originalsum-arrsum;
    }
};
   