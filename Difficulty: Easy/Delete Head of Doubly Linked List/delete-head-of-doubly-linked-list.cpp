// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/
Node *deleteHead(Node *head) {
    // Your code here
    Node * del= head;
    head= head->next;
    if(head!=NULL)head->prev=NULL;
    delete del;
    return head;
}
