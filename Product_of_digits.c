//compiled on Programiz
#include <stdio.h>
//author-> gautam 
int main() {
    
    int n, digit, product = 1;
    printf("Enter a Number: " );
    scanf("%d", &n);
    
   printf("\n");
    while(n != 0 ) {
        digit = n%10;
        printf("%d", digit);
        product *= digit;
        n/= 10;
        if(n != 0) {
            printf(" x ");
        }
    }
    printf(" = %d" ,product);
    return 0;
}
