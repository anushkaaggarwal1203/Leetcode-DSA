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
 int size(ListNode *head){
    if(head==NULL) return 0;
    int s=0;
    ListNode *temp=head;
    while(temp){
        s++;
        temp=temp->next;
    }
    return s;
 }
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if(head==NULL) return 0;
        int d=0;
        int n=size(head)-1;
        int a=1;
        for(int i=1;i<=n;i++){
            a*=2;
        }
        ListNode *temp=head;
        while(temp){
            d+=a*(temp->val);
            a/=2;
            temp=temp->next;
        }
        return d;
    }
};