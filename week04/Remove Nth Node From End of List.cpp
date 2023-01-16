// Time complexity - O(N)  (N---> nodes)
// Space complexity - O(1)

class Solution {
public:

    void deleteNode(ListNode* delnode) {
        auto nxt  =delnode->next;
        *delnode = *(delnode->next);
        delete(nxt);
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        auto first = head;
        auto second = head;

        ListNode* prv = NULL;

        while(n--)
        first = first->next;

        while(first)
         {
            first= first->next;
            prv = second;
            second = second->next;
         }

        if(second->next)
            deleteNode(second);
        else if(prv)
            prv->next =NULL;
        else
            return NULL;

        return head;
    }
};