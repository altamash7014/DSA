/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        // if(head==NULL)return ;
        if(head == NULL) return NULL;          // case 1
        
        if(head->next == NULL){                // case 2
            delete head;
            return NULL;
        }
        Node * temp = head;
        while(temp->next->next!=NULL){
            temp= temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        return head;
        
    }
};