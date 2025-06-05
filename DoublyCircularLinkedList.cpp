#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
};
Node *p,*temp,*ttemp,*first,*pttemp,*q;
void CreateFirstNode(int val){
    first=(Node*)malloc(sizeof(Node));
    first->data=val;
    first->next=first;
    first->prev=first;
}

/**add a new node**/
void AddNode(int val){
    temp=first->prev;
    p=(Node*)malloc(sizeof(Node));
    p->data=val;
    p->next=first;
    temp->next=p;
    p->prev=temp;
    first->prev=p;
}

/** swap first and last node **/
void SwapFirstandLast(){
    temp=first->next;
    ttemp=first->prev;
    pttemp=ttemp->prev;
    p=first;
    pttemp->next=p;
    p->prev=pttemp;
    p->next=ttemp;
    ttemp->prev=p;
    ttemp->next=temp;
    temp->prev=ttemp;
    first=ttemp;
}
/**swap first and second node**/
void SwapFirstandSecond(){
    temp=first;
    ttemp=temp->next;
    p=ttemp->next;
    q=first->prev;
    temp->next=p;
    p->prev=temp;
    ttemp->next=temp;
    temp->prev=ttemp;
    q->next=ttemp;
    ttemp->prev=q;
    first=ttemp;
}
/**swap last and second last node **/
void SwapLastandSecLast(){
    temp=first->prev;
    ttemp=temp->prev;
    pttemp=ttemp->prev;
    pttemp->next=temp;
    temp->prev=pttemp;
    temp->next=ttemp;
    ttemp->prev=temp;
    ttemp->next=first;
    first->prev=ttemp;
}
/** delete first node **/
void deleteFirstNode(){
    temp=first;
    ttemp=first->prev;
    first=first->next;
    first->prev=ttemp;
    ttemp->next=first;
    free(temp);
}
/** delete last node **/
void deleteLastNode(){
    temp=first->prev;
    ttemp=temp->prev;
    ttemp->next=first;
    first->prev=ttemp;
    free(temp);
}

void display(){
    temp=first;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=first);
}
int main(){
    int val;
    cout<<"enter the first node:";
    cin>>val;
    CreateFirstNode(val);
    cout<<"\nfirst node was created";
    char op;
    while(1){
        cout<<"\nyou want to continue:";
        cin>>op;
        if(op=='n' || op=='N')
            break;
        cout<<"\nenter a node:";
        cin>>val;
        AddNode(val);
    }
    cout<<"\nfinal list is :";
    display();
    //SwapFirstandLast();
    //SwapFirstandSecond();
    //SwapLastandSecLast();
    //deleteFirstNode();
    //deleteLastNode();
    cout<<"\nupdated linked list is :";
    display();
    return 0;
}
