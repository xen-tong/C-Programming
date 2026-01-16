#include<stdio.h>
int main(){
char st[1000];
int i,capital,small,digit;
i=capital=small=digit=0;
printf("Enter a String=");
gets(st);

while(st[i]!='\0'){

    if(st[i]>=65 && st[i]<=90){
        capital++;
    }

    else if(st[i]>=97 && st[i]<=122){
        small++;
    }
    else if(st[i]>=48 && st[i]<=57){
        digit++;
    }




    i++;
}

printf("NUMBER OF CAPITAL LETTER:%d\n",capital);
printf("NUMBER OF SMALL LETTER:%d\n",small);
printf("NUMBER OF DIGITS:%d\n",digit);


}
