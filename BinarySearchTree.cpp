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
/**add a node in binary tree**/
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
/**in - order traversal**/
void InOrder_trv(T *p){
    if(p!=NULL){
        InOrder_trv(p->left);
        cout<<p->data<<" " ;
        InOrder_trv(p->right);
    }
}
/**pre - order traversal**/
void PreOrder_trv(T *p){
    if(p!=NULL){
        cout<<p->data<<" " ;
        PreOrder_trv(p->left);
        PreOrder_trv(p->right);
    }
}
/**post - order traversal**/
void PostOrder_trv(T *p){
    if(p!=NULL){
        PostOrder_trv(p->left);
        PostOrder_trv(p->right);
        cout<<p->data<<" " ;
    }
}

/**deletion of a node in binary tree**/
Tree* deletenode(Tree* root,int val){
  if(root==NULL)
    return root;
  if(root->data>val)
    root->left=deletenode(root->left,val);
  else if(root->data<val)
    root->right=deletenode(root->right,val);
  else{

    /** if only right child present**/
    if(root->left==NULL){
        temp=root->right;
        free(root);
        return temp;
    }

    /** if only left child present **/
    if(root->right==NULL){
        temp=root->left;
        free(root);
        return temp;
    }

    /** if both child present **/
    ttemp=root->right;
    while(ttemp!=NULL && ttemp->left!=NULL)
        ttemp=ttemp->left;
    root->data=ttemp->data;
    root->right=deletenode(root->right,ttemp->data);
  }
  return root;
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
    cout<<"\nIn-Order traversal is:";
    InOrder_trv(root);
    /*cout<<"\nPre-Order traversal is:";
    PreOrder_trv(root);
    cout<<"\nPost-Order traversal is:";
    PostOrder_trv(root);*/

    cout<<"\nenter a node for deletion:";
    cin>>n;
    deletenode(root,n);

    cout<<"\nIn-Order traversal is:";
    InOrder_trv(root);
   /* cout<<"\nPre-Order traversal is:";
    PreOrder_trv(root);
    cout<<"\nPost-Order traversal is:";
    PostOrder_trv(root);*/
}

