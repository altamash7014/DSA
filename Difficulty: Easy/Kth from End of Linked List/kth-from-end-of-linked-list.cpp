/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    Node* reverse(Node* head) {
    Node *prev = nullptr, *curr = head, *next;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
  }

    int getKthFromLast(Node* head, int k) {
        // code here
        
        head= reverse(head);
        Node * temp= head;
        int count = 1;
        while(temp!=NULL &&count<k){
            temp = temp->next;
            count++;
        }
         if(temp == NULL) return -1;
        // temp= temp->next;
        return temp->data;
        
    }
};