/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isIdentical(Node* p, Node* q) {
        // code here
        if(p==NULL || q==NULL)return p==q;
        
        int leftsame = isIdentical(p->left,q->left);
        int rightsame = isIdentical(p->right,q->right);
        return leftsame && rightsame && p->data == q->data;
    }
};