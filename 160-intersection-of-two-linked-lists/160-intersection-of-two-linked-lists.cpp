/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curr=headA; 
        set<ListNode*> s;
        while(curr!=NULL){
            s.insert(curr);
            curr=curr->next;
        }
        curr=headB;
        while(curr!=NULL){
            
            if(s.find(curr)!=s.end()){
                return curr;
            }
            
            curr=curr->next;
        }
        return NULL;
    }
};