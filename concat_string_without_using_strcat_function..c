#include<stdio.h>
int main(){
   int i=0;
   int j=0;
   int len=0;
   char w1[100]="123abc";
   char w2[]="*A*B";

   while(w1[i]!='\0'){

    i++;
    len++;
   }

    while(w2[j]!='\0'){

    w1[len+j]=w2[j];
    j++;
   }
   printf("%s\n",w1);







}
