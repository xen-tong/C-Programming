//Write a program to give grades to a student
//marks<30 is c
//30<=marks<70 is B
//70<=marks<90 is A
//90<=marks<=100 is A+

#include <stdio.h>
int main(){
int marks;
printf("Enter Marks:");
scanf("%d",&marks);

if(marks>=90 && marks<=100 ){
    printf("A+");
}
else if(marks>=70 && marks<90){
      printf("A");
}
else if(marks>=30 && marks<70){
    printf("B");
}
else if(marks>=0 && marks <30){
    printf("C");
}
else {
    printf("Wrong Number");
}
return 0;






}
