class node{
public:
    int val;
    node *next;
    node(int val){
        this->val=val;
        next=NULL;
    }
};
class MyLinkedList {
public:
    node *head;
    int size;
    MyLinkedList() {
        head=NULL;
        size=0;
    }
    
    int get(int index) {
        if(index<0 || index>=size) return -1;
        node *temp=head;
        for(int i=1;i<=index;i++){
            temp=temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        size++;
        node *a=new node(val);
        if(head==NULL){
            head=a;
            return;
        }
        a->next=head;
        head=a;
    }
    
    void addAtTail(int val) {
        node *b=new node(val);
        if(head==NULL) {
            head=b;
            size++;
            return;
        }
        node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=b;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size) return;
        node *c=new node(val);
        if(head==NULL){
            head=c;
            size++;
            return;
        }
        if(index==0){
            c->next=head;
            head=c;
            size++;
            return;
        }
        node *temp=head;
        for(int i=1;i<=index-1;i++){
            temp=temp->next;
        }
        c->next=temp->next;
        temp->next=c;
        size++;

    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=size) return;
        if(index==0){
            head=head->next;
            size--;
            return;
        }
        node *temp=head;
        for(int i=1;i<=index-1;i++){
            temp=temp->next;
        }
        node *t=temp->next;
        temp->next=temp->next->next;
        delete t;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */