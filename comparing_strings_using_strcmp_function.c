#include<stdio.h>
#include<string.h>
int main(){
char w1[]="Sabab Mustafa";
char w2[]="Taranggo";


int x=strcmp(w1,w2);
if(x==0){
    printf("Equal");
}
else{
    printf("Not Equal");
}
}
