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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd=new ListNode(10);
        ListNode *even=new ListNode(10);
        ListNode *t1=odd;
        ListNode *t2=even;
        ListNode *temp=head;
        int flag=0;
        while(temp!=NULL){
            if(flag==0){
                t1->next=temp;
                temp=temp->next;
                t1=t1->next;
                flag=1;
            }
            else{
                t2->next=temp;
                temp=temp->next;
                t2=t2->next;
                flag=0;
            }
        }
        t1->next=even->next;
        t2->next=NULL;
        return odd->next;
    }
};