#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int res = r;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            long long total_hours = 0;

            for (int p : piles) {
                // Integer arithmetic equivalent to ceil(p / mid)
                total_hours += (p + mid - 1LL) / mid;
            }

            if (total_hours <= h) {
                res = mid;      // Valid speed; try to find a smaller one
                r = mid - 1;
            } else {
                l = mid + 1;    // Too slow; increase speed
            }
        }

        return res;
    }
};