/**implementation of circular queue using extra count variable **/

#include<iostream>
using namespace std;
#define maxi 5
typedef struct CQUEUE{
    int data[maxi];
    int front,rear,count;
}cq;
void init(cq* p){
    p->front=p->rear=-1;
    p->count=0;
}
int Full(cq* p){
    int x;
    if(p->rear==maxi-1)
        x=0;
    else
        x=p->rear+1;
    if(x==p->front)
        return 1;
    else
       return 0;
}
int Empty(cq* p){
    int x=p->rear - p->front;
    if(x<0)
        x=-x;
    if(x==1 && p->count==0)
        return 1;
    else
        return 0;
}
void ENQ(cq* p,int x){
    if(Full(p))
       return;
    if(p->front==-1)
        p->rear=p->front=0;
    if(p->rear==maxi-1)
        p->rear=0;
    else
        p->rear=p->rear+1;
    p->data[p->rear]=x;
    p->count=p->count+1;
}
int DEQ(cq* p){
    if(Empty(p))
        return -1;
    int x=p->data[p->front];
    if(p->front==p->rear)
        p->front=p->rear=-1;
    if(p->front==maxi-1)
        p->front=0;
    else
        p->front=p->front+1;
    p->count=p->count-1;
    return x;
}
int main(){
    cq q,*p;
    p=&q;
    init(p);
    ENQ(p,10);
    ENQ(p,20);
    ENQ(p,30);
    ENQ(p,40);
    ENQ(p,50);
    cout<<DEQ(p)<<endl;
    cout<<DEQ(p)<<endl;
    cout<<DEQ(p)<<endl;
    cout<<DEQ(p)<<endl;
    cout<<DEQ(p)<<endl;
    return 0;
}













