class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {

        if (valueDiff < 0) return false;

        unordered_map<long long, long long> bucket;
        long long size = (long long)valueDiff + 1;

        for (int i = 0; i < nums.size(); i++) {

            long long num = nums[i];

            long long id = num / size;

            if (num < 0) id--;

            // same bucket
            if (bucket.count(id)) {
                return true;
            }

            // left bucket
            if (bucket.count(id - 1) &&
                abs(num - bucket[id - 1]) <= valueDiff) {
                return true;
            }

            // right bucket
            if (bucket.count(id + 1) &&
                abs(num - bucket[id + 1]) <= valueDiff) {
                return true;
            }

            bucket[id] = num;

            // maintain sliding window
            if (i >= indexDiff) {
                long long oldNum = nums[i - indexDiff];
                long long oldId = oldNum / size;

                if (oldNum < 0) oldId--;

                bucket.erase(oldId);
            }
        }

        return false;
    }
};