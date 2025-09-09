#include<stdio.h>

int main() {
    //author - gautam
    int n = 100;
    //i have used the variable here , cuz i am lazy to write 100 multiple times :)
    printf("Multiplication table of %d", n);
    
    for(int i = 1; i <= 10; i++) {
        printf("\n %d x %d = %d", n,i, n*i);
    }
   
    return 0;
}
