//Write a program to check if given character is digit or not ........
#include <stdio.h>
int main(){
printf("Enter A Value:");
char x,res;

scanf(" %c",&x);
res=((x>='0') && (x<='9'));
printf("%d\n\n\n",res);
//conditions
printf("===============Conditions===============\n");
printf("If It Shows 1 Thats Mean It's Digit Number.\n");
printf("If It Shows 0 Thats Mean It's Not Digit Number.\n");
return 0;

}
