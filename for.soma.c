#include <stdio.h>

int main(){
    int x, y, i;
    for (x = 10, y=15; y > 10 ; x++ , y--){
        printf("x %d | y: %d | x + y: %d\n", x , y, x+y);
    }
    return 0;
}