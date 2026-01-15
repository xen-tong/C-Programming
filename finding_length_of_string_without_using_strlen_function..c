#include<stdio.h>
int main(){

char G[]="Abc 123 7&*&*";
int i=0;
int len=0;

while(G[i]!='\0'){
    i++;
    len++;
}
printf("Length=%d\n",len);


}
