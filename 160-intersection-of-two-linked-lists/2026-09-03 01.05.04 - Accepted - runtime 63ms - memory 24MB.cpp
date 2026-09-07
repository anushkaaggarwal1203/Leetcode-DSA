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
        int s1=0,s2=0;
        ListNode *temp1=headA;
        while(temp1!=NULL){
            s1++;
            temp1=temp1->next;
        }
        ListNode *temp2=headB;
        while(temp2!=NULL){
            s2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        if(s1>s2){
            int idx=s1-s2;
            for(int i=1;i<=idx;i++){
                temp1=temp1->next;
            }
        }
        if(s2>s1){
            int idx=s2-s1;
            for(int i=1;i<=idx;i++){
                temp2=temp2->next;
            }
        }
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
    }
};