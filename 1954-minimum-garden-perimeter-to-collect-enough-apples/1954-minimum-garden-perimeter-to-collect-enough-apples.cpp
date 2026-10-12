
class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long lo = 1;
        long long hi = 100000;

        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;

            long long apl = 2LL * mid * (mid + 1) * (2 * mid + 1);

            if (apl < neededApples)
                lo = mid + 1;
            else
                hi = mid - 1;
        }

        return 8 * lo;
    }
};
