#include <stdio.h>
int main( ){
    int i, a;
    a = 0;
    for(i = 1; i <= 100 ; i++){
        if (i % 3 == 0){
            
            printf("%d\n", i);
            a += i;
        }
    }
    printf("%d\n", a);
    return 0;
}