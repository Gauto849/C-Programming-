#include<stdio.h>

int main() {
    //author - gautam
    int a,b;
    
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);
    
    if(a>b) {
        printf("%d is greater than %d", a, b);
    } else if(a < b) {
        printf("%d is greater than %d",b,a);
    } else {
        printf("Both the numbers are equal");
    }
    
    return 0;
}
