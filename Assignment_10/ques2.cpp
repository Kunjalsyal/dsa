#include <unordered_set>
#include <vector>

std::vector<int> findCommon(const std::vector<int>& A, const std::vector<int>& B) {
    std::unordered_set<int> setA(A.begin(), A.end());
    std::unordered_set<int> commonSet;
    std::vector<int> result;

    for (int x : B) {
        if (setA.find(x) != setA.end()) {
            // If not already added
            if (commonSet.insert(x).second) {
                result.push_back(x);
            }
        }
    }

    return result;
}
