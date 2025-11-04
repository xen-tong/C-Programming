#include<stdio.h>
int main()
{
    int age;
    printf("Enter Age:");
    scanf("%d",&age);
    if(age>=18){

        printf("Adult\n");
    }
    else{
        printf("Not Adult\n");
    }
    printf("============Thank You===============\n");
    return 0;
}
