class Solution {
  public:
    Node* deleteK(Node* head, int k) {

        if(head == NULL) return NULL;
        if(k == 1) return NULL;

        Node* temp = head;
        int count = 1;

        while(temp != NULL && temp->next != NULL){

            if((count + 1) % k == 0){
                Node* del = temp->next;
                temp->next = del->next;
                delete del;
            }
            else{
                temp = temp->next;
            }
            count++;
        }
        return head;
    }
};
