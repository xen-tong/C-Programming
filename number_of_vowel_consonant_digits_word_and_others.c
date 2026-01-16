#include<stdio.h>
#include<string.h>
int main(){
char s1[1000],ch;
printf("Enter:");
gets(s1);
int i,vowel,conso,dig,word,others;
i=vowel=conso=dig=word=others=0;
while((ch=s1[i])!='\0'){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        vowel++;
    }
    else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        conso++;
    }
    else if(ch>='0'&&ch<='9'){
        dig++;
    }
    else if(ch==' '){
        word++;
    }
    else{
        others++;
    }
    i++;

}
word++;

printf("NUMBER OF VOWEL= %d\n",vowel);
printf("NUMBER OF CONSONANT= %d\n",conso);
printf("NUMBER OF DIGITS= %d\n",dig);
printf("NUMBER OF WORDS= %d\n",word);
printf("NUMBER OF OTHERS SYMBOL= %d\n",others);









}
