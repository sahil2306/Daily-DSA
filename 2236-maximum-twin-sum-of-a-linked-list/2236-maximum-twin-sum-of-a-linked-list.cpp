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

    ListNode* rev(ListNode *head){
        ListNode *prev=NULL,*curr=head,*nxt;

        while(curr){
            nxt = curr->next;
            curr->next = prev;

            prev=curr;
            curr=nxt;
        }

        return prev;
    }

    int pairSum(ListNode* head) {
        ListNode *curr,*mid;
        ListNode *slow=head,*fast=head,*prev;

        while(fast and fast->next){
            fast = fast->next->next;
            prev=slow;
            slow=slow->next;
        }    

        mid = rev(slow);
        curr=head;
        prev->next=NULL;

        int ans=0;
        while(curr!=NULL and mid!=NULL){
            int t = curr->val+mid->val;
            ans = max(t,ans);
            curr=curr->next;
            mid=mid->next;
        }

        
        return ans;
    }
};