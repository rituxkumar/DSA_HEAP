class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> count(101);
        int maxFreqency = 0;
        for (int& num : nums) {
            count[num]++;
            maxFreqency = max(maxFreqency, count[num]);
        }
        int result = 0;
        for (int i = 0; i < 101; i++) {
            if (count[i] == maxFreqency) {
                result += maxFreqency;
            }
        }
        return result;
    }
};