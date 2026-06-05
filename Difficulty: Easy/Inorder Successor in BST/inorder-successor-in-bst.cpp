/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int inOrderSuccessor(Node *root, Node *k) {
        // code here
        Node * currnode = root;
        int result =-1;
        while(currnode!=NULL){
            if(currnode->data<=k->data){
                currnode = currnode->right;
            }
            else{
                result = currnode->data;
                currnode = currnode->left;
            }
        }
        return result;
        
    }
};