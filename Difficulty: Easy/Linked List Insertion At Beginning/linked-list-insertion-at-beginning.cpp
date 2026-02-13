/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        // Code here
        Node *nn = new Node(x);
        if(head==NULL)return nn;
        nn->next = head;
        head = head->next;
        head = nn;
        return head;
    }
};