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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *prev,*fast,*slow;
        fast=head;
        slow=head;
        prev=head;
        int c=1;

        if(fast->next==NULL){
            return NULL;
        }

        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(c){
                c=0;
            }
            else{
                prev=prev->next;
            }
        }

        prev->next=slow->next;

        return head;

    }
};