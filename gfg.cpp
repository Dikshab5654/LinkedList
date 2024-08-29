class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node*slow=head;
        Node*fast=head;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(fast==slow){
            int count=1;
           slow=slow->next;
           
           while(slow!=fast){
            count++;
            slow=slow->next;
        }
        return count;
            }
        }
        return 0;
    }
};
