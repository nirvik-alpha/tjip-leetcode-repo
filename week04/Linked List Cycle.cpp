// Time Complexity - O(N)   N- number of nodes 
// Space Complexity - O(1)

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head==NULL)
        return false;
        auto slow = head;
        auto fast = head;
        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast)
            {
                return true;
            }
        }
    return false;
    }
};