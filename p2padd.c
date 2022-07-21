#include<stdio.h>
int main()
{
int a,b,c;
printf("entervalue for a and b :\n ");
scanf("%d%d",&a,&b);
int *p=&a,*q=&b;
printf("Address of p and address of q :%p %p\n",p ,q);
printf("valuat p and q :", *p,*q);
c=*p+*q;
printf("sum of pointers : %d",c);
}

/*
entervalue for a and b :
 10
10
Address of p and address of q :0x7ffe996b8d0c 0x7ffe996b8d10
valuat p and q :sum of pointers : 20
*/











                                                                    
