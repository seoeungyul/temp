#include  <stdio.h>
int main( ){
    int a = 0, b = 0;
    printf("Enter : ");
    scanf("%d", &b);
    while (a != 10){
        a += 1;
        printf("%d X %d = %d\n", b, a, a * b);
    }
    return 0;
    
}