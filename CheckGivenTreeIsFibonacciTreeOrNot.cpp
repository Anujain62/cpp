/** Write a program to check whether a given tree is Fibonacci Tree or not.**/

#include<iostream>
using namespace std;
typedef struct Tree{
  int data;
  Tree *left,*right;
}T;
T *root,*temp,*ttemp,*p,*s;
void init(){
 root=temp=ttemp=NULL;
}
void create_root(int val){
   root=(T*)malloc(sizeof(T));
   root->data=val;
    root->left=NULL;
    root->right=NULL;
}
void add_nodes(int val){
   temp=root;
   while(temp!=NULL){
    p=temp;
    if(temp->data>val)
        temp=temp->left;
    else
        temp=temp->right;
   }
   ttemp=(T*)malloc(sizeof(T));
   ttemp->data=val;
   ttemp->left=NULL;
   ttemp->right=NULL;
   if(p->data>val){
      p->left=ttemp;
   }
   else{
      p->right=ttemp;
   }
}
void InOrder_trv(T *p){
    if(p!=NULL){
        InOrder_trv(p->left);
        cout<<p->data<<" " ;
        InOrder_trv(p->right);
    }
}
int Check(Tree* p){
    int x=p->data;
    int y=p->left->data;
    int z=p->right->data;
    if(y==x-1 && z==x-2)
        return 1;
    if(y!=NULL && z==NULL)
        return 0;
    if(y==NULL && z!=NULL)
        return 0;
    if(y==NULL && z==NULL)
        return 1;
    if(y!=NULL && z!=NULL){
       if(Check(p->left) && Check(p->right))
           return 1;
       else
          return 0;
    }
}
int main(){
    int n;
    char x;
    cout<<"enter a number :";
    cin>>n;
    create_root(n);
    while(1){
        cout<<"you want to continue:";
        cin>>x;
        if(x== 'n' || x== 'N')
            break;
        cout<<"enter a number:";
        cin>>n;
        add_nodes(n);
    }
    cout<<"\nIn-Order traversal is:"<<endl;
    InOrder_trv(root);
    if(Check(root))
        cout<<"\nTree is complete binary tree"<<endl;
    else
        cout<<"\nTree is not complete binary tree"<<endl;
}


