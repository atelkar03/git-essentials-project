#include<stdio.h>
int main(){
   int days;
   printf("Enter days(1-7):");
   scanf("%d",&days);
   switch(days){
    case 1:
    printf("1-Monday");
    break;
    case 2:
    printf("2-tuesday");
    break;
    case 3:
    printf("3-wednesday");
    break;
    case 4:
    printf("4-thursday");
    break;
    case 5:
    printf("5-friday");
    break;
    case 6:
    printf("6-saturday");
    break;
    case 7:
    printf("7-saturday");
    break;
    default:
    printf("invalid input");

   }
}
   