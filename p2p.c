#include<stdio.h>
int main()
{
int a;
int *ptr =&a;
printf("entera value for a: ");
scanf("%d\n",&a);
printf("address of ptr   :%p\n", ptr);
printf("value at ptr   : %d\n", *ptr);
return 0;
}
