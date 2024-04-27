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
        ListNode* fast = head;
        ListNode* delay = head;
        
        for (int i = 0; i < n; ++i) {
            if (fast == NULL) 
                return head;   
            fast = fast->next;
        }
        if (fast == NULL) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        } 
        while (fast->next != NULL) {
            fast = fast->next;
            delay = delay->next;
        }
        ListNode* temp = delay->next;
        delay->next = temp->next;
        delete temp;
        
        return head;
    }
};
