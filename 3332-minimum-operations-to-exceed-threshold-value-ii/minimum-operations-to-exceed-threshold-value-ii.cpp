class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq(begin(nums),
                                                             end(nums));
        int temp = 0;
        while (!pq.empty() && pq.top() < k) {
            long long smallest = pq.top();
            pq.pop();

            long long secondSmall = pq.top();
            pq.pop();

            pq.push(smallest * 2 + secondSmall);
            temp++;
        }

        return temp;
    }
};