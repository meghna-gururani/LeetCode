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
    int gcd(int a,int b){
        if(a<b){
            return gcd(b,a);
        }
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* temp=head;
        while(temp->next!=NULL){
            ListNode* second=temp->next;
            ListNode* neww=new ListNode();
            neww->val=gcd(temp->val,second->val);
            temp->next=neww;
            neww->next=second;
            temp=second;
            }
        return head; 
      }       
};