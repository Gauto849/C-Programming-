#include<stdio.h>

int main() {
    //author - gautam
    int num;
    printf("Enter the number till which you wanna print integers starting from  1 :");
    
    scanf("%d", &num);
    
    for(int i = 1; i <= num ; i++) {
        printf("%d\n", i);
    }
    printf("Now if you wanna count in reverse....\n\n");
    for(int i = 10; i>=1; i--) {
        printf("%d \n",i);
    }
    return 0;
}
