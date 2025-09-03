class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                currentCount++;
                maxCount = max(maxCount, currentCount);
            } else {
                currentCount = 0;  // Reset when we encounter 0
            }
        }
        
        return maxCount;
    }
};