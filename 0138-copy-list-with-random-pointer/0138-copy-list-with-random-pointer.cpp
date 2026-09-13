/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        Node *temp=head;
        Node *b=new Node(10);
        Node *tempb=b;
        while(temp){
            Node *a=new Node(temp->val);
            tempb->next=a;
            tempb=tempb->next;
            temp=temp->next;
        }
        b=b->next;

        Node *a=head;
        Node *c=new Node(10);
        Node *tempc=c;
        while(a){
            tempc->next=a;
            a=a->next;
            tempc=tempc->next;
            tempc->next=b;
            b=b->next;
            tempc=tempc->next;
        }
        c=c->next;


        Node *t1=c,*t2;
        while(t1){
            t2=t1->next;
            if(t1->random) t2->random=t1->random->next;
            t1=t1->next->next;
        }


        Node *p=new Node(10);
        Node *q=new Node(10);
        Node *tempp=p,*tempq=q;
        while(c){
            tempp->next=c;
            tempp=tempp->next;
            c=c->next;
            tempq->next=c;
            tempq=tempq->next;
            c=c->next;
        }
        tempp->next=NULL;
        return q->next;
    }
};