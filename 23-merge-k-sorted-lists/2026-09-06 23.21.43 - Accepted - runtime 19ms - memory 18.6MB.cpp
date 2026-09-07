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
 ListNode* merge(ListNode *a,ListNode *b){
    ListNode *c=new ListNode(100);
    ListNode *temp=c;
    while(a!=NULL && b!=NULL){
        if(a->val<=b->val){
            temp->next=a;
            temp=temp->next;
            a=a->next;
        }
        else{
            temp->next=b;
            temp=temp->next;
            b=b->next;
        }
    }
    if(a==NULL) temp->next=b;
    else temp->next=a;
    return c->next;
 }
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& v) {
        if(v.size()==0) return NULL;
        while(v.size()>1){
            ListNode *a=v[0];
            v.erase(v.begin());
            ListNode *b=v[0];
            v.erase(v.begin());
            ListNode *c=merge(a,b);
            v.push_back(c);
        }
        return v[0];
    }
};