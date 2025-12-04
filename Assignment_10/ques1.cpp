#include <unordered_set>
#include <vector>

bool containsDuplicate(const std::vector<int>& nums) {
    std::unordered_set<int> st;
    for (int x : nums) {
        if (st.find(x) != st.end()) {
            return true;
        }
        st.insert(x);
    }
    return false;
}
