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
        int cnt=0;
        ListNode* curr=head;
        while(curr!=NULL){
            cnt++;
            curr=curr->next;
        }
        curr=head;
        if(cnt==0) return head;
        if(cnt==n) return head->next;
        int i=1;
        while(i<cnt-n){
            curr=curr->next;
            i++;
        }
        ListNode* temp=curr->next;
        curr->next=temp->next;

        return head;
    }
};
