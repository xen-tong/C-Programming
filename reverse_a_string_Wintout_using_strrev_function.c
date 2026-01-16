#include<stdio.h>
int main()
{

    int i=0,j=0,len=0;
    char s1[100]="Sabab Mustafa Taranggo";
    char s2[100];

    while(s1[i]!='\0'){
        i++;
        len++;
    }

    for(j=0,i=len-1;i>=0;i--,j++)

    {
        s2[j]=s1[i];
    }
    printf("%s\n",s2);
}
