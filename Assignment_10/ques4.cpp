#include <unordered_map>
#include <vector>

int firstNonRepeating(const std::vector<int>& nums) {
    std::unordered_map<int, int> freq;
    for (int x : nums) {
        freq[x]++;
    }

    // Traverse again in original order
    for (int x : nums) {
        if (freq[x] == 1) {
            return x;
        }
    }

    // If none found, you could return a sentinel like -1
    return -1;
}
