/** circular queue implementation using linked list & one pointer **/

#include<iostream>
using namespace std;
struct CQUEUE{
    int data;
    CQUEUE *next;
};
CQUEUE *rear;
int init(){
    rear=NULL;
}
void ENQ(int val){
    CQUEUE* temp=(CQUEUE*)malloc(sizeof(CQUEUE));
    if(temp==NULL)
        return;
    temp->data=val;
    if(rear==NULL){
        rear=temp;
        rear->next=temp;
    }
    else{
        temp->next=rear->next;
        rear->next=temp;
        rear=temp;
    }
}
int DEQ(){
    int x;
    CQUEUE* temp;
    temp=rear->next;
    x=temp->data;
    rear->next=temp->next;
    temp->next=NULL;
    free(temp);
    return x;
}
int main(){
    init();
    int n,a;
    char x;
    cout<<"enter the value:";
    cin>>n;
    ENQ(n);
    while(1){
        cout<<"Do you want to Continue:";
        cin>>x;
        if(x=='n' || x=='N')
            break;
        start:
        cout<<"1 - For Insertion"<<endl<<"2 - For Deletion"<<endl;
        cout<<"enter your choice:"<<endl;
        cin>>a;
        if(a==1){
             cout<<"enter the value:";
             cin>>n;
             ENQ(n);
        }
        else if(a==2)
            cout<<DEQ()<<endl;
        else{
            cout<<"wrong number Retry"<<endl;
            goto start;
        }
    }
}














