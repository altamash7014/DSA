/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        Node * nn = new Node(data);
        if(head==NULL){nn->next = nn;return nn;}
        Node * temp = head;
        if(data < head->data){
            while(temp->next != head){
                temp = temp->next;
            }

            temp->next = nn;
            nn->next = head;
            return nn;
        }
        while(temp->next!=head){
            if(temp->next->data <nn->data){
                temp = temp->next;
            }
            else{
                nn -> next = temp->next;
                temp->next = nn;
                // temp = temp->next;
                return head;
                
            }
        }
        temp->next = nn;
        nn ->next = head;
        return head;
        
        
    }
};