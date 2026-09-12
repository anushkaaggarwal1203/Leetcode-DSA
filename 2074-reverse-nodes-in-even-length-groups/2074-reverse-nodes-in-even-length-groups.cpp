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
    ListNode *revPart(ListNode *head,int left,int right){
        if(left==right) return head;
        int n=1;
        ListNode *temp=head;
        ListNode *a=NULL,*b=NULL,*c=NULL,*d=NULL;
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
    ListNode* reverseEvenLengthGroups(ListNode* head){
        int gap=1;
        ListNode *temp=head;
        while(temp && temp->next){
            int remLen=0;
            ListNode *t=temp->next;
            for(int i=1;i<=gap+1 && t!=NULL;i++){
                t=t->next;
                remLen++;
            }
            if(gap+1>remLen) gap=remLen-1;
            if(gap%2!=0) revPart(temp,2,gap+2);
            for(int i=1;i<=gap+1;i++){
                temp=temp->next;
            }
            gap++;
        }
        return head;
    }
};