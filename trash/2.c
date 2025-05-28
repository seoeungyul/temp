#include <stdio.h>
int main (){
    int a, b ,c;
    printf("num : ");
    scanf("%d %d", &a, &b);
    printf("<1> + | <2> - | <3> * | <4> / | <5> %%\n");
    printf("num : ");
    scanf("%d", &c);
    if (c == 1){
        printf("%d + %d = %d\n", a, b, a + b);
    }
    else if (c == 2){
        printf("%d - %d = %d\n", a, b, a - b);
    }
    else if (c == 3){
        printf("%d * %d = %d\n", a, b, a * b);
    }
    else if (c == 4){
        printf("%d / %d = %.2f\n", a, b, (float)a / b);
    }
    else if (c == 5){
        printf("%d %% %d = %d\n", a, b, a % b);
    }
    else{
        printf("잘못된 입력입니다.\n");
    }
    return 0;
}