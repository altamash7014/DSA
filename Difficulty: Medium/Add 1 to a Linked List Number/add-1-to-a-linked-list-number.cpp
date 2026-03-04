/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node* head) {
    Node *curr = head, *prev = nullptr, *next;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
    }
    Node* addOne(Node* head) {
        // Your Code here
        int carry = 1;
        head = reverse(head);
        Node* temp = head;
        int sum =0;
        while (temp != nullptr || carry != 0) {
            int sum = temp->data +carry;
            temp->data = sum%10;
            carry = sum / 10;
            
            if(temp->next == NULL && carry!=0){
                temp->next = new Node(0);
            }
            temp = temp->next;}
            head = reverse(head);
            return head;

    }
};