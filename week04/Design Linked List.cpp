/* Time complexity- O(1) for addAtHead addAtTail , 
O(N) for get , addAtIndex , deleteAtIndex  ( N---> index)

Space Complexity - O(1) 

*/
class MyLinkedList {
public:

    class Node {
        public:    
        int value;
        Node* next;
         Node(int _value , Node* _next )
         {
            value = _value;
            next = _next;
         }
    };

    const static int DUMMYVALUE = INT_MIN;
    Node* head = NULL ;
    int len;

    MyLinkedList() {
        len =0;
        head = new Node(DUMMYVALUE,NULL);

    }
    
    int get(int index) {
        if(index<0 || index>=len) return -1;
        
        auto currentNode = head->next;
        while(index--)
        {
            currentNode = currentNode->next;
        }
        return currentNode->value;
    }
    
    void addAtHead(int val) {
        addAtIndex(0,val);
    }
    
    void addAtTail(int val) {
        addAtIndex(len,val);
    }
    
    void addAtIndex(int index, int val)
     {
        if(index<0 || index>len)
         return ;

         auto currentNode = head;
        while(index--)
        {
            currentNode = currentNode->next;
        }
        auto nxt = currentNode->next;
        currentNode->next = new Node(val,NULL);
        currentNode->next->next = nxt;
        len++;

    }
    
    void deleteAtIndex(int index) {
        
        if(index<0 || index>=len)
         return ;

         auto currentNode = head;
        while(index--)
        {
            currentNode = currentNode->next;
        }
        auto nxt = currentNode->next;
        currentNode->next = currentNode->next->next;
        delete(nxt);
        len--;
    }
};
