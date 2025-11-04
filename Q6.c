//write a program to print the smallest  number.....
#include<stdio.h>
int main()
{
int a;
printf("Enter A:");
scanf("%d",&a);

int b;
printf("Enter B:");
scanf("%d",&b);

int res;
// Formula: min = b + ((a - b) & ((a - b) >> 31));
// Works for 32-bit signed integers
res= b+((a-b)&((a-b)>>31));

printf("%d\n",res);

printf("===============The End===============\n");

return 0;


}
