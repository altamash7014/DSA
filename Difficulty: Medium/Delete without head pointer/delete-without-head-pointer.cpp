/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void deleteNode(Node* del_node) {
        // code here
            Node * temp = del_node->next;
            del_node ->data = temp->data;
            del_node ->next = temp->next;
            delete temp;
           
    }
};