/* Structure of Linked List Node
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* temp = head;
        Node* prev = NULL;
        while(temp!=NULL){
            Node * saved = temp->next;
            temp->next = prev;
            prev= temp;
            temp= saved;
        }
        return prev;
}};