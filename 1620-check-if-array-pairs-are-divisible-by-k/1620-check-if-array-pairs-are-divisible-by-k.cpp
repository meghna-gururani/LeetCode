class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> remainder_count(k, 0);  // Array to store the frequency of remainders

        // Count the remainders
        for (int num : arr) {
            int remainder = ((num % k) + k) % k;  // Handle negative numbers correctly
            remainder_count[remainder]++;
        }

        // Check pairs
        // Case 1: remainder 0 should have an even count
        if (remainder_count[0] % 2 != 0) {
            return false;
        }

        // Case 2: for remainders i and k-i, counts must match
        for (int i = 1; i < k; ++i) {
            if (i != k - i) {
                if (remainder_count[i] != remainder_count[k - i]) {
                    return false;
                }
            }
        }

        // Case 3: when k is even, remainder k/2 should have an even count
        if (k % 2 == 0 && remainder_count[k / 2] % 2 != 0) {
            return false;
        }

        return true;
    }

};