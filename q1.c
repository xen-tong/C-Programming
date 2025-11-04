//Write a Program to check if a student passed or fail
//marks>30 is passed
//marks<30 is Failed

#include <stdio.h>
int main()
{
    int num;
    printf("Enter The Marks:");
    scanf("%d",&num);


    if(num>=30 && num<=100){
        printf("Passed");
    }
    else if(num>=0 && num<30){
        printf("Failed");
    }
    else{
        printf("Wrong Number");
    }
   return 0;

}
