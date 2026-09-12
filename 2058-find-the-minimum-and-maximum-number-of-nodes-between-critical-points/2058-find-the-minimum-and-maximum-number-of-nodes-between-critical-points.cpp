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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int idx=1;
        int fidx=-1,lidx=-1,p=-1,q=-1;
        int minD=INT_MAX;
        ListNode *a=head,*b=head->next,*c=head->next->next;
        if(!c) return {-1,-1};
        while(c){
            if(b->val>a->val && b->val>c->val || b->val<a->val && b->val<c->val ){
                if(fidx==-1) fidx=idx;
                else lidx=idx;

                p=q;
                q=idx;
                if(p!=-1){
                    minD=min(minD,(q-p));
                }
            }
            idx++;
            a=a->next;
            b=b->next;
            c=c->next;
        }
        if(lidx==-1) return {-1,-1};
        int maxD=lidx-fidx;
        return{minD,maxD};

    }
};