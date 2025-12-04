#include <unordered_set>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode* head) {
    std::unordered_set<ListNode*> visited;
    ListNode* cur = head;
    while (cur != nullptr) {
        // If we've seen this node before → cycle
        if (visited.find(cur) != visited.end()) {
            return true;
        }
        visited.insert(cur);
        cur = cur->next;
    }
    return false;
}
