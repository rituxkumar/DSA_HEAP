class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const long long MOD = 1e9 + 7;
        vector<long long> sums;  // Use long long for subarray sums

        // Step 1: Generate all subarray sums
        for (int i = 0; i < n; i++) {
            long long s = 0;
            for (int j = i; j < n; j++) {
                s += nums[j];
                sums.push_back(s);
            }
        }

        // Step 2: Sort the sums
        sort(sums.begin(), sums.end());

        // Step 3: Take range [left, right] and compute sum modulo MOD
        long long result = 0;
        for (int i = left - 1; i < right; i++) {
            result = (result + sums[i]) % MOD;
        }

        return (int)result;
    }
};