/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        Node * temp= head;
        Node * tempi= head;
        int cnt =0;
        while(temp!=NULL){
            cnt++;
            temp= temp->next;
        }
        int ans = cnt/2 +1;
        cnt=0;
        while(tempi!=NULL && cnt<ans){
            cnt++;
            if(cnt == ans) break;
            tempi= tempi->next;
        }
        return tempi->data;
    }
};