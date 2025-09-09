#include <stdio.h>

int main() {
     //author-> Gautam
     int choice;
     float balance = 10000.0000 , withdraw , deposit;
     
     printf("Welcome to ATM");
     printf("\n\n1.check your balance: ");
     printf("\n2.Deposit cash:  ");
     printf("\n 3.withdraw cash: ");
     printf("\n\nJust enter the serial number of the desired choice: ");
     
     scanf("%d",&choice);
     switch(choice) {
        case 1: {
           printf("\n Your balance is %f", balance);
           break;
        }
        case 2: {
           printf("\n Your current balance is %f, Enter the amount to deposit: ", balance);
           scanf("%f", &deposit);
           balance += deposit;
           printf("Thanks for depositing ,Now your balance is %f", balance);
           break;
        }
        case 3: {
           printf("\n Your initial balance is %d Enter the amount to withdraw: ",balance);
           scanf("%f", &withdraw);
           printf("\n withdrawl successful , Please collect the cash");
           balance -= withdraw;
           printf("Now your balance  is %f",balance);
           break;
        }
        default: {
            printf("\nPlease enter a valid choice");
        }
     }
    return 0;
}
