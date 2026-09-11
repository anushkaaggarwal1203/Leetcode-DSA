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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=0;
        ListNode *temp=head;
        while(temp){
            temp=temp->next;
            n++;
        }
        int size=n/k;
        int r=n%k;
        vector<ListNode*> v;
        temp=head;
        while(temp){
            ListNode *c=new ListNode(10);
            ListNode *tempC=c;
            int s=size;
            if(r>0){
                s++;
                r--;
            }
            for(int i=1;i<=s;i++){
                tempC->next=temp;
                temp=temp->next;
                tempC=tempC->next;
            }
            tempC->next=NULL;
            v.push_back(c->next);
        }
        if(k>v.size()){
            int a=k-v.size();
            for(int i=1;i<=a;i++){
                v.push_back(NULL);
            }
        }
        return v;
    }
};