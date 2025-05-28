#include <stdio.h>
int main( ){
    int i;
    int a;
    a = 0;
    for(i = 1; i <= 10 ; i++){
        //printf("%d\n", i);
        a = a+i;
        printf("%d %d\n", i, a);
    }
    return 0;
}