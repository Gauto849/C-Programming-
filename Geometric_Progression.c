#include <iostream>
#include<math.h>
//author -> GAUTAM
int main() {  
    int r = 2;
    int a = 2;
    int n = 7;
    for(int i = 1; i <= 7; i++) {
        int factor = pow(r, i-1);
        printf("%d\n",a*factor);
    }
    return 0;
}
