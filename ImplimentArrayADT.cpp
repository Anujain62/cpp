#include<iostream>
using namespace std;

class ArrayADT{
private:
    int capacity;
    int lastIndex;
    int *ptr;
public:
    ArrayADT(){
       capacity=0;
       lastIndex=-1;
       ptr=nullptr;
    }
    void CreateArray(int capacity);
    int getItem(int index);
    void setItem(int index,int value);
    void editItem(int index,int value);
    int countItem();
    void removeItem(int index);
    int searchItem(int value);
    void sortArray();
    friend ostream& operator<<(ostream&,ArrayADT);
    ArrayADT(ArrayADT &List){
       capacity=List.capacity;
       lastIndex=List.lastIndex;
       ptr=new int[capacity];
       for(int i=0;i<=List.lastIndex;i++)
        ptr[i]=List.ptr[i];
    }
     ~ArrayADT(){
       delete []ptr;
    }
};

void ArrayADT::CreateArray(int capacity){
     this->capacity=capacity;
     lastIndex=-1;
     ptr=new int(capacity);
}

int ArrayADT::getItem(int index){
     if(lastIndex==-1){
        cout<<"\nList is empty";
        return -1;
     }
     if(index>lastIndex || index<0){
        cout<<"\nInvalid Index";
        return -1;
     }
     return(ptr[index]);
}

void ArrayADT::setItem(int index,int value){
     if(lastIndex==capacity-1)
        cout<<"\nOverflow";
     else if(index>capacity-1 || index<0)
        cout<<"\nInvalid Index";
     else if(index>lastIndex+1)
        cout<<"\nInvalid Index";
     else if(index<=lastIndex){
        lastIndex++;
       int i=lastIndex;
        while(i!=index){
            ptr[i]=ptr[i-1];
            i--;
        }
        ptr[index]=value;
     }
     else if(index==lastIndex){
        lastIndex++;
        ptr[index]=value;
     }
}

void ArrayADT::editItem(int index,int value){
     if(index<0 || index>lastIndex)
        cout<<"\nInvalid Index";
     else
     ptr[index]=value;
}

int ArrayADT::countItem(){
     return(lastIndex+1);
}

void ArrayADT::removeItem(int index){
    if(index<0 || index>lastIndex)
        cout<<"\nEither invalid index or underflow";
    else if(index<lastIndex){
       int i=index;
        while(i!=lastIndex){
            ptr[i]=ptr[i+1];
            i++;
        }
        lastIndex--;
    }
   else if(index==lastIndex)
        lastIndex--;
}

int ArrayADT::searchItem(int value){
    if(lastIndex==-1){
        cout<<"\nList is empty";
        return -1;
    }
    int i;
    for(i=0;i<=lastIndex;i++){
        if(ptr[i]==value)
            return i;
    }
    return -1;
}

void ArrayADT::sortArray(){
   int r,i,t;
   for(r=1;r<countItem();r++){
    for(i=0;i<countItem()-r;i++){
        if(ptr[i]>ptr[i+1]){
            t=ptr[i];
            ptr[i]=ptr[i+1];
            ptr[i+1]=t;
        }
    }
   }
}

ostream& operator<<(ostream &dout,ArrayADT l){
    if(l.lastIndex==-1)
        cout<<"\nList is empty";
    for(int i=0;i<l.countItem();i++)
        cout<<" "<<l.getItem(i);
    return(dout);
}

int main(){
    ArrayADT l1;
    l1.CreateArray(5);
    l1.setItem(0,10);
    l1.setItem(1,20);
    l1.setItem(2,30);
    l1.setItem(1,40);
    cout<<l1;
    return 0;
}
