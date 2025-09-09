#include<stdio.h>

int main() {
    //author - gautam
    int num;
    
    printf("Enter a Number: ");
    scanf("%d", &num);
    
    if(num > 0) printf("number is possitive");
    else if(num < 0) printf("number is negative");
    else printf("number is 0");
    return 0;
}
