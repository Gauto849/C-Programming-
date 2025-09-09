#include<stdio.h>

int main() {
    //author - gautam
    int num;
    
    printf("Enter a Number: ");
    scanf("%d", &num);
    
    if(num %2 == 0) printf("number is even");
    else printf("Number is odd");
    return 0;
}
