/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node*  deleteNode(Node* head, int x) {
        // code here
        // if(x==1){
              if(x==1){
            Node * temp = head;
            head = head -> next;
            delete temp;
            return head;
        }
        Node * temp = head;
        for(int i = 1;i<x-1 && temp!=NULL;i++){
            temp = temp->next;
        }
        Node* rem = temp->next;
        temp->next = temp->next->next;
        delete rem;
        return head;
    }
};