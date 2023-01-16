// Time Complexity -  O(N) --> Working on exactly N nodes 
// Space Complexity - O(1) --> Didn't took any extra space 


class Solution {
public:
    ListNode* reverseList(ListNode* head) {

       auto currentNode = head;
       ListNode* prvnode = NULL;

        while(currentNode)
        {
            auto nextNode = currentNode->next;
            currentNode->next = prvnode;
            prvnode = currentNode;
            currentNode = nextNode;
        }
       return prvnode;

    }
};