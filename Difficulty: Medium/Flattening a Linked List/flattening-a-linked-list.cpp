/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
}; */

class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
        multiset<int> s;
        Node * temp = root;
        
        while(temp!=NULL){
            Node * bottemp = temp;
            while(bottemp!=NULL){
                s.insert(bottemp->data);
                bottemp = bottemp->bottom;
            }
            temp= temp->next;
        }
        
        Node * dummy = new Node(-1);
        Node* curr = dummy;
        for(int x:s){
            curr->bottom = new Node(x);
            curr = curr->bottom;
        }

        return dummy->bottom;
        } 
        
        
        
        
        
        // return temp;
  
};