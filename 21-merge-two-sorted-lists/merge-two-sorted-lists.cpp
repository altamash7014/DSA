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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        queue<int> st;

        while (temp1 != NULL && temp2 != NULL) {
            if (temp1->val <= temp2->val) {
                st.push(temp1->val);
                temp1 = temp1->next;
            }
            else {
                st.push(temp2->val);
                temp2 = temp2->next;
            }
        }

        while (temp1 != NULL) {
            st.push(temp1->val);
            temp1 = temp1->next;
        }

        while (temp2 != NULL) {
            st.push(temp2->val);
            temp2 = temp2->next;
        }

        // Both lists were empty
        if (st.empty()) {
            return NULL;
        }

        ListNode* head = new ListNode(st.front());
        st.pop();

        ListNode* temp = head;

        while (!st.empty()) {
            temp->next = new ListNode(st.front());
            st.pop();
            temp = temp->next;
        }

        return head;
    }
};