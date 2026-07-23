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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp = head;
        int cnt = 0;

        // Count number of nodes
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }

        // Position of node to delete from beginning
        int dele = cnt - n;

        // If the head itself has to be deleted
        if (dele == 0) {
            ListNode* deleted = head;
            head = head->next;
            delete deleted;
            return head;
        }

        // Move to the node before the node to delete
        temp = head;

        for (int i = 1; i < dele; i++) {
            temp = temp->next;
        }

        // Delete the next node
        ListNode* deleted = temp->next;
        temp->next = deleted->next;
        delete deleted;

        return head;
    }
};