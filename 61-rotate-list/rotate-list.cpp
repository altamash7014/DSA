/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        if(head==NULL|| head->next==NULL){
            return head;
        }
        int len =0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        k = k%len;
        while(k--){
        temp = head;
            while(temp->next->next!=NULL){
                temp=temp->next;


            }
            ListNode * rem = temp->next;
            rem->next= head;
            temp->next=NULL;
            head = rem;
        }
        return head;




    }
};