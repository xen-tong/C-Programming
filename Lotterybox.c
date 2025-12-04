#include<stdio.h>
int main (){

    printf("=============================================\n");
      printf("~~~~~~~~~~~~~~Lottery~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~Box~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
          printf("=============================================\n\n\n");
 int continent,num1,num2,num3,num4,num5;
 printf("Enter A Number For Which Country You Want to Visit.....\n (NB: Pick a Numbers Between (1 and 5)):");
 scanf("%d",&continent);


switch(continent){
case 1:
    printf("=================================\n\n");
printf("$$$$ Congartulations $$$$\n ");
printf("You Have Picked Asian Continent\n.. ");
printf("Enter Your Choice For Select a  Country :");
    scanf("%d",&num1);
 switch(num1){

 case 1: printf("Banladesh");
 break;
 case 2: printf("India");
 break;
 case 3: printf("Pakistan");
 break;
 case 4: printf("Nepal");
 break;
 case 5: printf("Japan");
 break;
 case 6: printf("Srilanka");
 break;
 case 7: printf("China");
 break;

 }
 break;
 case 2:
         printf("=================================\n\n");
     printf(" $$$$ Congartulations $$$$\n ");
    printf("You Have Picked American Continent\n ");
    printf("Enter Your Choice For Select a  Country (Choice Between (1-7)):");
    scanf("%d",&num2);
    switch(num2){

 case 1: printf("United States of America");
 break;
 case 2: printf("Canada");
 break;
 case 3: printf("Mexico");
 break;
 case 4: printf("Brazil");
 break;
 case 5: printf("Chile");
 break;
 case 6: printf("Colombia");
 break;
 case 7: printf("Argentina");
 break;

 }
  break;
 case 3:
         printf("=================================\n\n");
     printf(" $$$$ Congartulations $$$$\n ");
    printf(" You Have Picked Europe Continent\n ");
    printf("Enter Your Choice For Select a  Country (Choice Between (1-7)):");
    scanf("%d",&num3);
    switch(num3){

 case 1: printf("United Kingdom");
 break;
 case 2: printf("France");
 break;
 case 3: printf("Germany");
 break;
 case 4: printf("Italy");
 break;
 case 5: printf("Spain");
 break;
 case 6: printf("Netherlands");
 break;
 case 7: printf("Sweden");
 break;

 }
  break;
  case 4:
          printf("=================================\n\n");
      printf(" $$$$ Congartulations $$$$\n ");
    printf(" You Have Picked Australian Continent\n ");
    printf("Enter Your Choice For Select a  Country (Choice Between (1-7)):");
    scanf("%d",&num4);
    switch(num4){

 case 1: printf("Australia");
 break;
 case 2: printf("New Zealand");
 break;
 case 3: printf("Fiji");
 break;
 case 4: printf("Papua New Guinea");
 break;
 case 5: printf("Samoa");
 break;
 case 6: printf("Tonga");
 break;
 case 7: printf("Solomon Islands");
 break;



}
 break;
 case 5:
         printf("=================================\n\n");
     printf(" $$$$ Congartulations $$$$\n ");
    printf("  You Have Picked Soviet Union Continent\n ");
    printf("Enter Your Choice For Select a  Country (Choice Between (1-7))");
    scanf("%d",&num5);
    switch(num5){

 case 1: printf("Russia");
 break;
 case 2: printf("Ukraine");
 break;
 case 3: printf("Belarus");
 break;
 case 4: printf("Kazakhstan");
 break;
 case 5: printf("Uzbekistan");
 break;
 case 6: printf("Turkmenistan");
 break;
 case 7: printf("Kyrgyzstan");
 break;



}






}

return 0;
}
