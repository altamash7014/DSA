/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
    void findLarge(Node *root, int &k, int &result){
        if(root == nullptr) return;
        
        findLarge(root->right, k, result);
        k--;
        if( k== 0){
            result= root->data;
            return;
        }
        
        findLarge(root->left, k, result);
    }
    int kthLargest(Node *root, int k) {
        // Your code here
        int result = -1;
        findLarge(root, k, result);
        return result;
    }
};