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
    ListNode* reverseLinkedList(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode* front = head->next;

    ListNode* newHead = reverseLinkedList(front);

    front->next = head;
    head->next = NULL;

    return newHead;
    }
    bool isPalindrome(ListNode* head) {
        ListNode * temp = head;
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL  ){
            slow = slow->next;
            fast= fast->next->next;
        }
        ListNode *newhead = reverseLinkedList(slow->next);
        while(newhead!=NULL){
            if(temp->val!=newhead->val){
                return false;
            }
            else{
                temp= temp->next;
                newhead = newhead -> next;

            }
        }
            reverseLinkedList(newhead);
            return true;

    }
};