/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node* fast = head; 
        Node* slow = head;
        while(fast!=NULL && fast->next!= NULL){
            slow= slow->next;
            fast = fast->next->next;
        }
        return slow->data;
        
        
        
    }
};