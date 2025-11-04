#include<stdio.h>
int main()
{
    char num;
    printf("Enter Your Number:");
    scanf(" %c", &num);

    if ((num >= '0') && (num <= '9')) {
        printf("Yes Type A Valid Number\n");

        if (num >= 0) {
            printf("Positive Number\n");

            if (num % 2 == 0) {
                printf("ITS AN EVEN NUMBER\n");
            } else {
                printf("Its AN Odd Number\n");
            }
        } else {
            printf("Negative Number");
        }

    } else {
        printf("Type A Valid Number Not Garbage.\n");
    }
}

