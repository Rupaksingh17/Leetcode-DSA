class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        for (int num : nums) sum += num;

        if (sum % 2 != 0) return 0;

        return nums.size() - 1;
    }
};