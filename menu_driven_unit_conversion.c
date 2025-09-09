#include<stdio.h>
#include<math.h>
int main() {
    //author-> gautam
    int val;
    int choice;
    int factor;
    printf("Ente the value in Km: ");
    scanf("%d",&val);
    
    printf("Now which unit. you wanna convert to ? \n");
    printf("Enter 1 for meters\n Enter 2 for centimeters\n Enter 3 for millimeters\n");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1: {
            factor = pow(10,3);
            printf("%d KM = %d meters", val, val*factor);
            break;
        }
        case 2: {
            factor = pow(10,5);
            printf("%d KM = %d centimeters", val, val*factor);
            break;
        }
        case 3: {
            factor = pow(10,6);
            printf("%d KM = %d  millimeters", val, val*factor);
            break;
        }
        default: {
            printf(">>>Enter a Valid choice");
            break;
        }
        
    }
    return 0 ; 
}
