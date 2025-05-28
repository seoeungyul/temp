#include <stdio.h>
int main( ){
    int i, n, a, b;
    printf("Enter :");
    scanf("%d", &n);
    a = 0;
    b = 0;
    for(i = 1; i <= n ; i++){
        //printf("%d\n", i);
        if (i %2 == 0){
            a += i;
        }
        else{
            b += i;
        }
    }
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}