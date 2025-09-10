
#include <stdio.h>

int main() {
    // author -> Gautam
    
    float a,b;
    char opr; 
    
    printf("Enter the 1st number: ");
    scanf("%f",&a);
    
    printf("\nEnter the operation to perform: ");
    scanf(" %c", &opr);
    
    printf("Enter the 2nd number: ");
    scanf("%f",&b);
  
    
    switch(opr) {
        case '+': {
            printf("\n%f + %f = %f",a,b,a+b);
            break;
        }
        case '-': {
            printf("\n%f - %f = %f",a,b, a-b);
            break;
        }
        case '/': {
            printf("\n%f / %f = %f",a,b, a/b);
            break;
        }
        case '*': {
            printf("\n%f * %f = %f",a,b, a*b);
            break;
        }
        default : {
            printf("Not a valid operator");
            break;
        }
    }
    return 0;
}
