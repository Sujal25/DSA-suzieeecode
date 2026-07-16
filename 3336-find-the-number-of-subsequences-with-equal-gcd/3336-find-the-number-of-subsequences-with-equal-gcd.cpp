class Solution {
public:
    static constexpr int MOD = 1'000'000'007;

    int subsequencePairCount(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());

        // 0 means the corresponding subsequence is empty so far.
        vector<vector<long long>> dp(
            maxVal + 1, vector<long long>(maxVal + 1, 0)
        );
        dp[0][0] = 1;

        for (int x : nums) {
            vector<vector<long long>> next(
                maxVal + 1, vector<long long>(maxVal + 1, 0)
            );

            for (int g1 = 0; g1 <= maxVal; ++g1) {
                for (int g2 = 0; g2 <= maxVal; ++g2) {
                    long long ways = dp[g1][g2];
                    if (ways == 0) continue;

                    // Skip x
                    next[g1][g2] = (next[g1][g2] + ways) % MOD;

                    // Add x to seq1
                    int newG1 = gcd(g1, x);
                    next[newG1][g2] = (next[newG1][g2] + ways) % MOD;

                    // Add x to seq2
                    int newG2 = gcd(g2, x);
                    next[g1][newG2] = (next[g1][newG2] + ways) % MOD;
                }
            }

            dp = move(next);
        }

        long long answer = 0;

        // Start from 1: both subsequences must be non-empty.
        for (int g = 1; g <= maxVal; ++g) {
            answer = (answer + dp[g][g]) % MOD;
        }

        return answer;
    }
};
//find pair of subseq(seq1,seq2)
//they have to be disjoint
// Use dynamic programming to store number of subsequences up till index i with GCD g1 and g2.