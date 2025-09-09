#include<stdio.h>

int main() {
    //author -> Gautam
    int n = 100;
    int sum = 0; 
    
    for(int i = 1; i <= n ; i++) {
        sum += i*i;
    }
    printf("Sum of squares of first %d natural numbers is:%d",n,sum);
    return 0;
}
