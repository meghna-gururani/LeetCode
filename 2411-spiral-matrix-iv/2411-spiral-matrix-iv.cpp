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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>arr(m,vector<int>(n,-1));
        int top=0,left=0,bottom=m-1,right=n-1;
        ListNode*current=head;
        while(current != NULL){
            for(int i=top;i<=right && current != nullptr;i++){
                arr[top][i]=current->val;
                current=current->next;
            }
            top++;

            for(int i=top;i<=bottom && current != nullptr;i++){
                arr[i][right]=current->val;
                current=current->next;
            }
            right--;

            for(int i=right;i>=left && current != nullptr;i--){
                arr[bottom][i]=current->val;
                current=current->next;
            }
            bottom--;

            for(int i=bottom;i>=top && current != nullptr;i--){
                arr[i][left]=current->val;
                current=current->next;
            }
            left++;
        }
        return arr;
    }
};