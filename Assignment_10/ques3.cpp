#include <unordered_map>
#include <vector>
#include <iostream>

std::unordered_map<int, int> countFreq(const std::vector<int>& nums) {
    std::unordered_map<int, int> freq;
    for (int x : nums) {
        freq[x]++;
    }
    return freq;
}

// Example to print:
void printFreq(const std::unordered_map<int, int>& freq) {
    for (auto &p : freq) {
        std::cout << p.first << " → " << p.second << " times\n";
    }
}
