// Time Complexity - O(N*K)  N- number of nodes , K- number of lists 
// Space Complexity - O(1)  

class Solution {
public:


    ListNode* MergeTwoList(ListNode* left, ListNode* right )
    {
        ListNode* dummyhead = new ListNode(0);
        ListNode* copyhead = dummyhead;

        while(left and right)
        {
            int vleft = left->val;
            int vright  = right->val;
            dummyhead->next = vleft <vright ? new ListNode(vleft) : new ListNode(vright);
            left = vleft< vright ?  left->next : left;
            right = vleft<vright ? right : right->next;
            dummyhead = dummyhead->next;
        }
        while(left)
        {
            dummyhead->next = new ListNode(left->val);
            dummyhead = dummyhead->next;
            left = left->next;
        }
        while(right)
        {
            dummyhead->next = new ListNode(right->val);
            dummyhead = dummyhead->next;
            right = right->next;
        }

        return copyhead->next;

    }

    ListNode* helper(int L , int R , vector<ListNode*>& lists){

        if(L>R) return NULL;
        if(L==R) return lists[L];

        int M = (L+R)/2;
        auto left = helper(L,M,lists);
         auto right = helper(M+1,R,lists);

         return MergeTwoList(left,right);


    }


    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        return helper(0,lists.size()-1,lists);




    }
};