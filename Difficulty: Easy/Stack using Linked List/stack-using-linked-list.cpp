/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class myStack {

    Node* topNode;
    int count;

  public:
  
    myStack() {
        
        topNode = NULL;
        count = 0;
    }

    bool isEmpty() {
        
        return topNode == NULL;
    }

    void push(int x) {
        
        Node* newNode = new Node(x);

        newNode->next = topNode;

        topNode = newNode;

        count++;
    }

    void pop() {
        
        if(topNode == NULL)
        {
            return;
        }

        Node* temp = topNode;

        topNode = topNode->next;

        delete temp;

        count--;
    }

    int peek() {
        
        if(topNode == NULL)
        {
            return -1;
        }

        return topNode->data;
    }

    int size() {
        
        return count;
    }
};