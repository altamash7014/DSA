/*
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
//   if(temp==NULL)return head;
//         Node* nn = new Node;
//         nn->data = val;
//         nn->next = temp->next;
//         temp->next =nn;
//         return head;
        
class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        if(pos<1)return head;
        Node* temp = head;
        if(pos ==1 ){
            Node * nn = new Node(val);
            nn->next = head;
            return nn;}
    // / temp = head;
        for(int i =1;i<pos-1 && temp!=NULL;i++){
            temp = temp->next;
        }
            Node * nn = new Node(val);
            nn->next= temp->next;
            temp->next= nn;
            return head;
        
        
    }
};