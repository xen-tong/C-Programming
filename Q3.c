//Write a Program to find if a character entered by used is upper case or not........
#include<stdio.h>
int main(){
char ch;
printf("Enter Upper Case Latter:");
scanf(" %c",&ch);

if(ch>='A' && ch<='Z' ){
    printf("Upper Case");

}
else if(ch>='a' && ch<='z' ){
    printf("Lower Case");
}
else{
    printf ("Entered A Wrong");
}

}
