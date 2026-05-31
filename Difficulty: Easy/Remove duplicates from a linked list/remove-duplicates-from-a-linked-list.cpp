/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
        unordered_set<int> st;
        Node *temp = head;
        while(temp != NULL && temp->next != NULL){
            
            st.insert(temp->data);
            
            if(st.find(temp->next->data) != st.end()){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
        }
        
        return head;
    }
};