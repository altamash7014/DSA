/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
        // Node* insertAtPos(Node* head, int p, int x) {

    Node* nn = new Node(x);
    Node* temp = head;

    // Move to pth node
    for(int i = 0; i < p && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL) return head;  // invalid p

    nn->next = temp->next;
    nn->prev = temp;

    if(temp->next != NULL)
        temp->next->prev = nn;

    temp->next = nn;

    return head;
}

    
};