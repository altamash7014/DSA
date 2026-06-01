/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        int cnt = 1;
        Node *temp = head;
        while(temp->next!=NULL){
            cnt++;
            // temp = temp->next;
            if(cnt%2==0){
                Node * rem = temp->next;
                temp->next = rem->next;
                delete rem;
                
            }
            else{
                temp= temp->next;
                
            }
            
        }
        return ;
        
    }
};