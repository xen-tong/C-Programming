//if a number is grater than 9 and less than 100 then print there true ........
#include<stdio.h>
int main(){
printf("Enter A number:");
int x,res;
scanf("%d",&x);

//logical operator
res=9<x && x<100;


//print section
printf("%d\n\n",res);

//conditions
printf("===============Conditions===============\n");
printf("If It Shows 1 Thats Mean It's True\n");
printf("If It Shows 0 Thats Mean It's false\n");
return 0;




}
