#include<stdio.h>
#include<string.h>
int main(){
    char st1[20]="Bangladesh";
    char st2[20]="Pakistan";
    char st3[20]="China";
    char st4[20]="Russia";
    char temp[20];

    printf("Before Swapping\n");
    printf("s1=%s\n",st1);
    printf("s2=%s\n",st2);
    printf("s3=%s\n",st3);
    printf("s4=%s\n",st4);


    strcpy(temp,st1);
    strcpy(st1,st2);
    strcpy(st2,st3);
    strcpy(st3,st4);
    strcpy(st4,temp);

    printf("\n\nAfter Swapping\n");
    printf("s1=%s\n",st1);
    printf("s2=%s\n",st2);
    printf("s3=%s\n",st3);
    printf("s4=%s\n",st4);




}
