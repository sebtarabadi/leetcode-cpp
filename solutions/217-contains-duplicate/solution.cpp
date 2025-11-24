#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> seenNums;

        for (int x : nums) {

            if (seenNums.count(x)) {
                return true;
            }

            seenNums.insert(x);
        }

        return false;
    }
};