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
 ListNode *reverse(ListNode *head){
    ListNode *prev=NULL,*curr=head,*nxt=NULL;
    while(curr){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
 }
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *b=reverse(slow->next);
        slow->next=NULL;
        ListNode *a=head;
        ListNode *n1=NULL,*n2=NULL;
        while(b){
            n1=a->next;
            n2=b->next;
            a->next=b;
            b->next=n1;
            a=n1;
            b=n2;
        }

    }
};