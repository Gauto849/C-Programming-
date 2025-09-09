#include<stdio.h>

int main() {
    //author - gautam
    int n = 100;
    //i have used the variable here , cuz i am lazy to write 100 multiple times :)
    printf("Printing even numbers from 1 to 100");
    
    for(int i = 1; i <= n; i++) {
        if(i%2 == 0) printf("\n %d",i);
    }
    printf("\n\nodd numbers from 1 to 100\n");
    for(int i = 1; i <= n; i++) {
        if(i%2 == 1) printf("\n %d",i);
    }
    return 0;
}
