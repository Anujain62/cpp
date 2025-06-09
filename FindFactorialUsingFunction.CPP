#include<stdio.h>
long int fact(int x)
int main()
{
    int x,n;
    clrscr();
    printf("enter a number:");
    scanf("%d",&n);
    x=fact(n);
    printf("fact of %d is %ld",n,x);
 }
   long int fact(int x)
   {
    if(x==0)
    return(1);
    else
    return(x*fact(x-1));
   }
