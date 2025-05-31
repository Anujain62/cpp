#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *temp,*ttemp,*p,*ntemp,*nttemp,*first,*ptemp,*pttemp;

/** create first node **/
void Create_first_node(int val){
    first=(Node*)malloc(sizeof(Node));
    first->data=val;
    first->next=first;
}

/** add new node at last **/
void add_node_at_last(int val){
    p=(Node*)malloc(sizeof(Node));
    temp=first;
    p->data=val;
    while(temp->next!=first)
        temp=temp->next;
    temp->next=p;
    p->next=first;
}

/** delete first node **/
void delete_first_node(){
    temp=first;
    first=first->next;
    ttemp=first;
    while(ttemp->next!=temp)
        ttemp=ttemp->next;
    ttemp->next=first;
    free(temp);
}

/** delete last node **/
void delete_last_node(){
    temp=first;
    ttemp=NULL;
    while(temp->next!=first){
        ttemp=temp;
        temp=temp->next;
    }
    ttemp->next=first;
    free(temp);
}

/** swap first and last node **/
void swap_first_last_node(){
    temp=first;
    ntemp=temp->next;
    ttemp=first;
    pttemp=NULL;
    while(ttemp->next!=first){
        pttemp=ttemp;
        ttemp=ttemp->next;
    }
    pttemp->next=temp;
    ttemp->next=ntemp;
    temp->next=ttemp;
    first=ttemp;
}

/** swap first and second node **/
void swap_first_second_node(){
    temp=first;
    ntemp=temp->next;
    ttemp=first;
    while(ttemp->next!=first)
        ttemp=ttemp->next;
    temp->next=ntemp->next;
    ntemp->next=temp;
    ttemp->next=ntemp;
    first=ntemp;
}

/** swap last and second last **/
void swap_last_seclast_node(){
    temp=NULL;
    ttemp=first;
    pttemp=NULL;
    while(ttemp->next!=first){
        temp=pttemp;
        pttemp=ttemp;
        ttemp=ttemp->next;
    }
    temp->next=ttemp;
    ttemp->next=pttemp;
    pttemp->next=first;
}

/** convert a singly circular linked list to singly linked list , which contains odd places nodes **/
void scircular_to_singly_contain_oddplace(){
    temp=first;
    p=(Node*)malloc(sizeof(Node));
    int count=1;
    do{
        if(count%2!=0){
            p->data=temp->data;
            p->next=p;
        }
        count++;
        temp=temp->next;
    }while(temp!=first);
    p->next=NULL;
}
void sdisplay(){
    temp=first;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void display(){
    temp=first;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=first);
}

int main(){
    int p;
     cout<<"enter first node:";
    cin>>p;
    Create_first_node(p);
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
    add_node_at_last(p);
    }
    cout<<"\nnew list:";
    display();

    /**DELETION**/

    //delete_first_node();
    //delete_last_node();

    /**SWAPPING**/

    //swap_first_last_node();
   // swap_first_second_node();
   //swap_last_seclast_node();

   /* cout<<"\nnew updated list:";
    display();*/

    scircular_to_singly_contain_oddplace();
    cout<<"\nnew updated list:";
    sdisplay();
    return 0;
}
