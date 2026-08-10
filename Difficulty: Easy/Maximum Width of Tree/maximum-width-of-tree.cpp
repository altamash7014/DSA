/*  Structure of a Binary Tree
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int maxWidth(Node* root) {
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        int maxi = 1;
        int count = 0;
        while(!q.empty()){
           Node* ans = q.front();
           q.pop();
           if(ans){
               count++;
               if(ans->left){
                   q.push(ans->left);
               }
               if(ans->right){
                   q.push(ans->right);
               }
           }
           else{
               maxi = max(maxi,count);
               count = 0;
               if(!q.empty()){
                   q.push(NULL);
               }
           }
        }
        return maxi;
    }
};