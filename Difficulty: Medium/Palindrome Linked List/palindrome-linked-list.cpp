/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

// class Solution {
//   public:
//     bool isPalindrome(Node *head) {
//         //  code here
        
//     }
// };
#include <bits/stdc++.h>
class Solution {
public:
        Node* reverse(Node* head) {
            Node* prev = nullptr;
            Node* curr = head;
            while (curr != nullptr) {
                Node* nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
            }
             return prev;
        }
    bool isPalindrome(Node* head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        }
        Node * slow = head;
        Node * fast = head;
        while(fast->next!= NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* rev = reverse(slow->next);
        slow->next = NULL;fast = head;
        while(rev!=NULL){
            if(fast->data!=rev->data){
                return false;
            }
            fast = fast->next;
            rev = rev->next;
        }
        return true;



    }
};