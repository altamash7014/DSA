/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        Node * temp= head;
        Node * tempi= head;
        int cnt =0;
        while(temp!=NULL){
            cnt++;
            temp= temp->next;
        }
        int ans = cnt/2 +1;
        
        int cnti=0;
        while(tempi!=NULL && cnti<ans){
            cnti++;
            if(cnti == ans-1){
                Node * del = tempi->next;
                tempi->next = tempi->next->next;
                delete del;
            }
            tempi=tempi->next;}
        if(cnt==1)return NULL;    
        else return head;
    }
};