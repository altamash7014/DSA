/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        if(head == NULL) return head;

        if(x == 1){
            Node* del = head;
            head = head->next;
            if(head != NULL) head->prev = NULL;
            delete del;
            return head;
        }
        Node* temp = head;
        for(int i = 1; i < x-1 && temp != NULL; i++){
            temp = temp->next;
        }
        if(temp == NULL || temp->next == NULL) return head;
        Node* del = temp->next;
        temp->next = del->next;
        if(del->next != NULL){
            del->next->prev = temp;}
        delete del;
        return head;
    }
};
