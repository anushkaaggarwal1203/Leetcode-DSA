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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int minr=0,maxr=m-1,minc=0,maxc=n-1;
        ListNode* temp=head;
        int i,j;
        vector<vector<int>> v(m,vector<int>(n,-1));
        while(minr<=maxr && minc<=maxc){
            //right
            for(j=minc;j<=maxc;j++){
                if(temp==NULL) return v;
                v[minr][j]=temp->val;
                temp=temp->next;
            }
            minr++;

            if(minr>maxr || minc>maxc) return v;

            //down
            for(i=minr;i<=maxr;i++){
                if(temp==NULL) return v;
                v[i][maxc]=temp->val;
                temp=temp->next;
            }
            maxc--;

            if(minr>maxr || minc>maxc) return v;

            //left
            for(j=maxc;j>=minc;j--){
                if(temp==NULL) return v;
                v[maxr][j]=temp->val;
                temp=temp->next;
            }
            maxr--;

            if(minr>maxr || minc>maxc) return v;

            //up
            for(i=maxr;i>=minr;i--){
                if(temp==NULL) return v;
                v[i][minc]=temp->val;
                temp=temp->next;
            }
            minc++;
        }
        return v;
    }
};