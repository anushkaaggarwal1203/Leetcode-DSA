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
    ListNode *prev=NULL,*curr=head,*NEXT=NULL;
    while(curr){
        NEXT=curr->next;
        curr->next=prev;
        prev=curr;
        curr=NEXT;
    }
    return prev;
 }
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL) return head;
        if(left==right) return head;
        ListNode *a=NULL,*b=NULL,*c=NULL,*d=NULL;
        ListNode *temp=head;
        int n=1;
        while(temp){
            if(n==left-1) a=temp;
            if(n==left) b=temp;
            if(n==right) c=temp;
            if(n==right+1) d=temp;
            n++;
            temp=temp->next;
        }
        if(a) a->next=NULL;
        c->next=NULL;
        c=reverse(b);
        if(a) a->next=c;
        b->next=d;
        if(a) return head;
        return c;
    }
};