#include <stdio.h>

int main() {
    int month;
   
     printf("There are basically 12 months ,according to english calender, so enter the value of n, to get the number of days in the nth month: ");
     scanf("%d", &month);
     printf("\n");
     switch(month) {
         case 1: {
             printf("The number of days in January is 31");
             break;
         }
         case 2: {
             printf("The number of days in Febraury is 28, in general");
             break;
         }
         case 3: {
             printf("The number of days in March is 31");
             break;
         }
         case 4: {
             printf("The number of days in April is 30");
             break;
         }
         case 5: {
             printf("The number of days in May is 31");
             break;
         }
         case 6: {
             printf("The number of days in June is 30");
             break;
         }
         case 7: {
             printf("The number of days in July is 31");
             break;
         }
         case 8: {
             printf("The number of days in August is 31");
             break;
         }
         case 9: {
             printf("The number of days in September is 30");
             break;
         }
         case 10: {
             printf("The number of days in october is 31");
             break;
         }
         case 11: {
             printf("The number of days in november is 30");
             break;
         }
         case 12: {
             printf("The number of days in December is 31");
             break;
         }
     }
    return 0;
}
