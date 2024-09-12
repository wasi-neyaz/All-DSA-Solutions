
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        
        //for empty list 
        if(head ==NULL){
            return -1;
        }
        // Your code
    Node *fast= head-> next;
    Node *slow= head;
    
    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        
    }
    return slow->data;
    
     
    }
};
