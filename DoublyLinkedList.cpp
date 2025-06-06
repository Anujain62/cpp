#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};
Node *first,*p,*temp,*ttemp;
void initlist(){
    first=NULL;
    temp=NULL;
    ttemp=NULL;
    p=NULL;
}
/**count node**/
int node_count(){
    int count=0;
    temp=first;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

/**create first node**/
void create_first(int val){
    first=(Node*)malloc(sizeof(Node));
    first->data=val;
    first->next=NULL;
    first->prev=NULL;
}
/**add node at last**/
void Add_node_at_last(int val){
    temp=first;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    ttemp=(Node*)malloc(sizeof(Node));
    ttemp->data=val;
    ttemp->next=NULL;
    temp->next=ttemp;
    ttemp->prev=temp;
}
/**add node at start**/
void add_at_start(int val){
    temp=(Node*)malloc(sizeof(Node));
    temp->data=val;
    temp->prev=NULL;
    temp->next=first;
    first->prev=temp;
    first=temp;
}
/**add node at second last**/
void add_node_sec_last(int val){
    p=(Node*)malloc(sizeof(Node));
    temp=first;
    ttemp=NULL;
    while(temp->next->next!=NULL)
        temp=temp->next;
    ttemp=temp->next;
    p->data=val;
    p->next=ttemp;
    ttemp->prev=p;
    p->prev=temp;
    temp->next=p;
}
/**add node at any position**/
void add_any_position(int val,int pos){
    if(pos==1)
        add_at_start(val);
    if(pos<1)
        return;
    p=(Node*)malloc(sizeof(Node));
    for(int i=1;i<pos;i++)
        temp=temp->next;
    ttemp=temp->next;
    p->data=val;
    p->next=ttemp;
    ttemp->prev=p;
    p->prev=temp;
    temp->next=p;
}
/**add node before given data**/
void add_before_data(int val,int cdata){
    p=(Node*)malloc(sizeof(Node));
    temp=first;
    ttemp=NULL;
    while(temp->data!=cdata){
        ttemp=temp;
        temp=temp->next;
    }
    p->data=val;
    p->next=temp;
    temp->prev=p;
    p->prev=ttemp;
    ttemp->next=p;
}
/**add node after given data**/
void add_after_data(int val,int n){
    p=(Node*)malloc(sizeof(Node));
    temp=first;
    ttemp=NULL;
    while(temp->data!=n)
        temp=temp->next;
    ttemp=temp->next;
    p->data=val;
    p->next=ttemp;
    ttemp->prev=p;
    p->prev=temp;
    temp->next=p;
}
/**delete first node**/
void delete_first_node(){
     temp=first;
    first=first->next;
    first->prev=NULL;
    free(temp);
}
/**delete last node**/
void delete_last_node(){
    temp=first;
    ttemp=NULL;
    while(temp->next!=NULL){
        ttemp=temp;
        temp=temp->next;
    }
    ttemp->next=NULL;
    free(temp);
}
/**delete second last node**/
void delete_sec_last_node(){
    temp=first;
    ttemp=NULL;
    p=NULL;
    while(temp->next->next!=NULL){
        ttemp=temp;
        temp=temp->next;
    }
    p=temp->next;
    ttemp->next=p;
    p->prev=ttemp;
    free(temp);
}
/**delete a node at any position**/
void delete_node_any_pos(int pos){
    temp=first;
    ttemp=NULL;
    p=NULL;
    for(int i=1;i<pos;i++){
        ttemp=temp;
        temp=temp->next;
    }
    p=temp->next;
     ttemp->next=p;
    p->prev=ttemp;
    free(temp);
}
/**delete a node before given data**/
void delete_before_data(int cdata){
    temp=first;
    p=NULL;
    ttemp=NULL;
    while(temp->data!=cdata)
        temp=temp->next;
    p=temp->prev;
    ttemp=p->prev;
    ttemp->next=temp;
    temp->prev=ttemp;
    p->next=NULL;
    p->prev=NULL;
    free(p);

    /*temp=first;
    ttemp=NULL;
    p=NULL;
    while(temp->data!=cdata){
        p=ttemp;
        ttemp=temp;
        temp=temp->next;
    }
    p->next=temp;
    temp->prev=p;*/
}
/**delete a node after given data**/
void delete_after_data(int cdata){
    temp=first;
    ttemp=NULL;
    p=NULL;
    while(temp->data!=cdata){
        temp=temp->next;
    }
   p=temp->next;
   ttemp=p->next;
   temp->next=ttemp;
   ttemp->prev=temp;
   free(p);
}
/**swap first and second node**/
void swap_first_sec_node(){
    temp=first;
    ttemp=temp->next;
    p=ttemp->next;

    ttemp->next=temp;
    ttemp->prev=NULL;
    temp->next=p;
    temp->prev=ttemp;
    p->prev=temp;
    first=ttemp;
}
/**add node before the last node**/
void add_before_last(int val){
    temp=first;
    ttemp=NULL;
    p=(Node*)malloc(sizeof(Node));
    while(temp->next!=NULL){
        ttemp=temp;
        temp=temp->next;
    }
    p->data=val;
    p->next=temp;
    temp->prev=p;
    ttemp->next=p;
    p->prev=ttemp;
}

/**swap first and last node**/
void swap_first_last_node(){
    Node *ntemp=(Node*)malloc(sizeof(Node));
    Node *pttemp=(Node*)malloc(sizeof(Node));
    temp=first;
    ntemp=temp->next;
    ttemp=first;
    pttemp=NULL;
    while(ttemp->next!=NULL){
        pttemp=ttemp;
        ttemp=ttemp->next;
    }
    ttemp->next=ntemp;
    ttemp->prev=NULL;
    ntemp->prev=ttemp;
    temp->next=NULL;
    temp->prev=pttemp;
    pttemp->next=temp;
    first=ttemp;
}
/**swap last and second last node**/
void swap_last_seclast_node(){
    temp=NULL;
    ttemp=first;
    p=NULL;
    while(ttemp->next!=NULL){
        p=temp;
        temp=ttemp;
        ttemp=ttemp->next;
    }
    p->next=ttemp;
    ttemp->prev=p;
    ttemp->next=temp;
    temp->prev=ttemp;
    temp->next=NULL;
}
/**swap mth and nth node**/
void swap_mth_nth_node(int m,int n){
    Node *ptemp=(Node*)malloc(sizeof(Node));
    Node *ntemp=(Node*)malloc(sizeof(Node));
    Node *pttemp=(Node*)malloc(sizeof(Node));
    Node *nttemp=(Node*)malloc(sizeof(Node));
    temp=first;
    ptemp=ntemp=NULL;
    ttemp=first;
    pttemp=nttemp=NULL;
    for(int i=1;i<m;i++){
        ptemp=temp;
        temp=temp->next;
    }
    ntemp=temp->next;
    for(int i=1;i<n;i++){
        pttemp=ttemp;
        ttemp=ttemp->next;
    }
    nttemp=ttemp->next;
    temp->next=nttemp;
    nttemp->prev=temp;
    temp->prev=pttemp;
    pttemp->next=temp;
    ttemp->next=ntemp;
    ntemp->prev=ttemp;
    ttemp->prev=ptemp;
    ptemp->next=ttemp;
}
/**create two singly linked list using doubly linked list**/
void create_two_singly_linlist(){
    temp=first;
    ttemp=first;
    p=(Node*)malloc(sizeof(Node));
    Node *q=(Node*)malloc(sizeof(Node));
    Node *fl=(Node*)malloc(sizeof(Node));
    Node *bl=(Node*)malloc(sizeof(Node));
    fl=first;
    while(temp!=NULL){
        p->data=temp->data;
        temp=temp->next;
        p->next=temp;
    }
    while(ttemp->next!=NULL){
        ttemp=ttemp->next;
    }
    bl=ttemp;
    while(ttemp!=NULL){
        q->data=ttemp->data;
        ttemp=ttemp->prev;
        q->next=ttemp;
    }
    p=fl;
    q=bl;
    cout<<"\nfirst singly list:";
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\nsecond singly list:";
    while(q!=NULL){
        cout<<q->data<<" ";
        q=q->next;
    }
}


void display(){
    temp=first;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){

    /**INTERTION**/

    int p;
    int n,m;
    int pos;

    cout<<"enter first node:";
    cin>>p;
    create_first(p);
    char a;
    while(1){
    cout<<"\nyou want to continue:";
    cin>>a;
    if(a=='n' || a=='N'){
       break;
    }
    else{
        cout<<"\nenter node:";
        cin>>p;
    }
    Add_node_at_last(p);
    //add_at_start(p);
    //add_node_sec_last(p);
    }
    cout<<"\nnew list:";
    display();

    /*cout<<"enter a new node";
    cin>>p;
    add_before_last();*/

    /*cout<<"\nenter position:";
    cin>>pos;
    cout<<"\nenter node:";
    cin>>p;

    add_any_position(p,pos);*/

    /*cout<<"\nenter data where you want to insert node:";
    cin>>n;
    cout<<"\nenter node:";
    cin>>p;*/

    //add_before_data(p,n);
    //add_after_data(p,n);

    /**DELETION**/

    //delete_first_node();
    //delete_last_node();
    //delete_sec_last_node();

    /*cout<<"\nenter position for deletion:";
    cin>>pos;

    delete_node_any_pos(pos);*/

    cout<<"\nenter data where you want to delete node:";
    cin>>n;

    delete_before_data(n);
    //delete_after_data(n);

    /**SWAPPING**/
    //swap_first_sec_node();
    //swap_first_last_node();
    //swap_last_seclast_node();

    /* cout<<"enter first position:";
     cin>>n;
     cout<<"enter second position:";
     cin>>m;*/
     //swap_mth_nth_node(m,n);

     //create_two_singly_linlist();

    cout<<"\nnew updated list:";
    display();
    return 0;
}
