#include<stdio.h>

int main() {
    //author - gautam
    int a,b,c;
    
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b && a>c) printf("%d is greater than %d & %d", a,b,c);
    else if(b>c&b>a) printf("%d is greater than %d & %d", b,c,a);
    else if(a ==b&& b==c)printf("all the entered numbers are equal");
    else printf("%d is greater than %d & %d", c,b,a);
    return 0;
}
