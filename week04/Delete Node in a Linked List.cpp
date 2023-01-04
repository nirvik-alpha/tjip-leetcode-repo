// Time Complexity - O(N) N- number of nodes  
// Space Complexity - O(1)

class Solution {
public:
    void deleteNode(ListNode* deletenode) {
        

        auto nxt  =deletenode->next;
        deletenode->val = deletenode->next->val;
        deletenode->next = deletenode->next->next;

        delete(nxt);
    }
};