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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *h1=new ListNode(10);
        ListNode *t=h1;
        ListNode *temp=head;
        while(temp){
            if((temp->val)!=val){
                t->next=temp;
                t=t->next;
            }
            temp=temp->next;
        }
        t->next=NULL;
        return h1->next;
    }
};