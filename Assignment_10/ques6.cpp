#include <unordered_set>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool dfsCheck(TreeNode* node, std::unordered_set<int>& seen) {
    if (node == nullptr) return false;
    // If this value is already seen → duplicate
    if (seen.find(node->val) != seen.end()) {
        return true;
    }
    seen.insert(node->val);
    // Check in left or right subtree
    return dfsCheck(node->left, seen) || dfsCheck(node->right, seen);
}

bool hasDuplicateInTree(TreeNode* root) {
    std::unordered_set<int> seen;
    return dfsCheck(root, seen);
}
