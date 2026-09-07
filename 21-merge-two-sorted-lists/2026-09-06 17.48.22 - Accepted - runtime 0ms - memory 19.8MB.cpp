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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode *a1=a;
        ListNode *b1=b;
        ListNode *c=new ListNode(100);
        ListNode *temp=c;
        while(a1!=NULL && b1!=NULL){
            if(a1->val<=b1->val){
                ListNode *t=new ListNode(a1->val);
                temp->next=t;
                temp=temp->next;
                a1=a1->next;
            }
            else{
                ListNode *t=new ListNode(b1->val);
                temp->next=t;
                temp=temp->next;
                b1=b1->next;
            }

        }
        if(a1==NULL) temp->next=b1;
        else temp->next=a1;
        return c->next;
    }
};