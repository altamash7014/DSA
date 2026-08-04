/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        Node* temp = head;
        while(temp->next!=NULL){
            if(temp->data!=temp->next->data){
                temp = temp->next;
            }
            else{
                temp->next = temp->next->next;
            }
        }return head;
    }
};