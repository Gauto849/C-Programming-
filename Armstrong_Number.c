#include <iostream>
#include<math.h>

//Author->Gautam
int main() {  
    int n,digit,copy,sum =0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    copy = n;
    while(n > 0) {
        digit = n%10;
        sum += digit*digit*digit;
        n /= 10;
        if(sum > copy) {
            printf("This is not an armstrong number");
            break;
        }
    }
    if(sum==copy) {
        printf("This is an Armstrong Number");
    }
    
    return 0;
}
