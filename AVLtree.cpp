#include<iostream>
using namespace std;

struct Tree{
    int key,height;
    Tree *left,*right;
};
Tree *root,*temp,*ttemp,*p;
void init(){
    root=temp=ttemp=NULL;
}
int getheight(Tree* p){
    if(p==NULL)
        return 0;
    return p->height;
}
int balanceTree(Tree* p){
    if(p==NULL)
        return 0;
    return getheight(p->left)-getheight(p->right);
}
Tree* RightRotation(Tree* temp){
    ttemp=temp->left;
    p=ttemp->right;
    ttemp->right=temp;
    temp->left=p;
    temp->height=1+max(getheight(temp->left),getheight(temp->right));
    ttemp->height=1+max(getheight(ttemp->left),getheight(ttemp->right));
    return ttemp;
}
Tree* LeftRotation(Tree* temp){
    ttemp=temp->right;
    p=ttemp->left;
    ttemp->left=temp;
    temp->right=p;
    temp->height=1+max(getheight(temp->left),getheight(temp->right));
    ttemp->height=1+max(getheight(ttemp->left),getheight(ttemp->right));
    return ttemp;
}
Tree* create_root(int k){
    temp=(Tree*)malloc(sizeof(Tree));
    temp->key=k;
    temp->left=temp->right=NULL;
    temp->height=1;
    return temp;
}
Tree* Insertion(Tree* root,int val){
    if(root==NULL){
        return create_root(val);
    }
    if(root->key>val)
        root->left=Insertion(root->left,val);
    else if(root->key<val)
        root->right=Insertion(root->right,val);
    else
        return root;
    root->height=1+max(getheight(root->left),getheight(root->right));
    int n=balanceTree(root);
    if(n>1 && val<root->left->key)
        return RightRotation(root);
    if(n<-1 && val>root->right->key)
        return LeftRotation(root);
    if(n>1 && val>root->left->key){
        root->left=LeftRotation(root->left);
        return RightRotation(root);
    }
    if(n<-1 && val<root->right->key){
        root->right=RightRotation(root->right);
        return LeftRotation(root);
    }
    return root;
}
void InOrder_trv(Tree *p){
    if(p!=NULL){
        InOrder_trv(p->left);
        cout<<p->key<<" " ;
        InOrder_trv(p->right);
    }
}
Tree* Deletion(Tree* root,int val){
    if(root==NULL)
        return root;
    if(root->key<val)
        root->right=Deletion(root->right,val);
    else if(root->key>val)
        root->left=Deletion(root->left,val);
    else{
        if(root->left==NULL || root->right==NULL){
            if(root->left!=NULL)
                temp=root->left;
            else
                temp=root->right;
            if(temp==NULL){
                temp=root;
                root=NULL;
            }
            else
                root=temp;
            free(temp);
        }
        else{
            temp=root->right;
            while(temp->left!=NULL)
                temp=temp->left;
            root->key=temp->key;
            root->right=Deletion(root->right,temp->key);
        }
    }
    if(root==NULL)
        return root;
    root->height=1+max(getheight(root->left),getheight(root->right));
    int n=balanceTree(root);
    if(n>1 && balanceTree(root->left)>=0)
        return RightRotation(root);
    if(n<-1 && balanceTree(root->right)<=0)
        return LeftRotation(root);
    if(n>1 && balanceTree(root->left)<0){
        root->left=LeftRotation(root->left);
        return RightRotation(root);
    }
    if(n<-1 && balanceTree(root->left)>0){
        root->right=RightRotation(root->right);
        return LeftRotation(root);
    }
    return root;
}
int main(){
    root=Insertion(root,20);
    root=Insertion(root,30);
    root=Insertion(root,36);
    root=Insertion(root,18);
    root=Insertion(root,25);
    root=Insertion(root,9);
    root=Insertion(root,2);
    root=Insertion(root,4);
    root=Insertion(root,17);
    root=Insertion(root,14);
    root=Insertion(root,20);
    root=Insertion(root,47);
    cout<<"\nIn-Order traversal is:";
    InOrder_trv(root);
    root=Deletion(root,18);
    root=Deletion(root,2);
    root=Deletion(root,30);
    /*int n;
    char x;
    cout<<"enter a number :";
    cin>>n;
    root=Insertion(root,n);
    while(1){
        cout<<"you want to continue:";
        cin>>x;
        if(x== 'n' || x== 'N')
            break;
        cout<<"enter a number:";
        cin>>n;
     root= Insertion(root,n);
    }
    cout<<"\nIn-Order traversal is:";
    InOrder_trv(root);
    cout<<"\nenter a node for deletion:";
    cin>>n;
    root=Deletion(root,n);*/

    cout<<"\nIn-Order traversal is:";
    InOrder_trv(root);
    return 0;
}










