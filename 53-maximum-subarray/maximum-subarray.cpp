 class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = nums[0];
        int maxSum = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            current = std::max(nums[i], current + nums[i]);
            maxSum = std::max(maxSum, current);
        }

        return maxSum;
    }
};
