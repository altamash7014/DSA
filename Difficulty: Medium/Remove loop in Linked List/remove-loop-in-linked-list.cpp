/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node * slow = head;
        Node * fast = head;
        while(fast!= NULL && fast->next !=NULL){
            fast= fast->next->next;
            slow= slow->next;
            if(fast == slow){
                slow = head;
                while(slow!=fast){
                    fast = fast ->next;
                    slow = slow->next;
                }
                Node* temp = slow;
                while(temp->next!=slow){
                    temp = temp->next;
                }
                    temp->next = NULL;
            }
        }
    }
};