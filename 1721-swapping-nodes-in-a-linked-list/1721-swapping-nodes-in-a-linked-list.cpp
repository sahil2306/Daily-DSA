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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *curr,*n1,*n2;
        curr=head;n2=head;
        
        while(curr!=NULL){
            n2=n2->next;
            if(--k==0){
                n1=curr;
                n2=head;
            }
            
            curr=curr->next;
        }
        
        swap(n1->val, n2->val);
        return head;
        
    }
};