#include <stdio.h>
int main( ){
    int i, a, b;
    printf("Enter : ");
    scanf("%d", &b);
    a = 0;
    for(i = 9; i >= 1 ; i--){
        //printf("%d\n", i);
        a = b*i;
        printf("%d X %d = %2d\n",b, i, a);
    }
    return 0;
}