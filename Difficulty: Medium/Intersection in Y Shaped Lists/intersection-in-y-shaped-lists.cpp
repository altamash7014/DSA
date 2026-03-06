/*
class Node {
public:
    int data;
    Node* next;
    Node* prev;
    

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        int count1=0,count2=0;
        Node* temp1 = head1;
        Node* temp2 = head2;
        while(temp1!=NULL){
            temp1=temp1->next;
            count1++;
        }
        // Node* temp1 = head1;
        // Node* temp2 = head2;
        while(temp2!=NULL){
            temp2=temp2->next;
            count2++;
        }
        temp1 = head1;
        temp2 = head2;
        int diff = abs(count1-count2);
        if(count1> count2){
            for(int i=0;i<diff;i++){
                temp1=temp1->next;}
        }else{        
            for(int i=0;i<diff;i++){
                temp2=temp2->next;}
        }    
            // while(temp1->data==temp2->data){
        while(temp1!=NULL && temp2!=NULL){
                   if( temp1==temp2)return temp1;
                   temp1=temp1->next;
                   temp2=temp2->next;
                       
                   }
            return NULL;
            
        
    }
};