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
    bool isPalin(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return 0;
            }
            i++;j--;
        }
        return 1;
    }
    bool isPalindrome(ListNode* head) {
        string s="";
        while(head!=NULL){
            s+=to_string(head->val);
            head=head->next;
        }
        return isPalin(s);
    }
};