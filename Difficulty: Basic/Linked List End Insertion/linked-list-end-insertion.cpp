/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node *nn = new Node(x);
        Node * temp = head;
        if(head==NULL)return nn;
        while(temp->next!=NULL){
            temp= temp -> next;
        }
        nn->data = x;
        temp->next=nn;
        nn->next = NULL;
        return head;
            
    }
};