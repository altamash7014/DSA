/*
structure of the node of the list is as
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
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        
        Node *nn = new Node(key);
        
        // insert at beginning
        if(head == NULL || head->data >= key){
            nn->next = head;
            return nn;
        }
        
        Node *temp = head;
        
        while(temp->next != NULL){
            if(temp->next->data < key){
                temp = temp->next;
            }
            else{
                nn->next = temp->next;
                temp->next = nn;
                return head;
            }
        }
        
        // insert at end
        temp->next = nn;
        
        return head;
    }
};