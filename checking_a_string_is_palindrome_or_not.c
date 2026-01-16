#include<stdio.h>
#include<string.h>
int main(){


char s1[]="DEED";
char s2[30];
int i=0;
int j=0;
int len=0;
while(s1[i]!='\0'){
    i++;
    len++;
}

for(j=0,i=len-1;i>=0;i--,j++){
    s2[j]=s1[i];
}
s2[j]='\0';
printf("%s\n",s2);


int d=strcmp(s2,s1);
if(d==0){
    printf("Palindrome");
}
else{
    printf("Not Palindrome");
}
}
