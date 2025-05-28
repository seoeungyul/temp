#include <stdio.h>
int main (){
    int a, b;
    char c;
    printf("num : ");
    scanf("%d %d", &a, &b);
    printf("+ | - | * | / | %%\n");
    printf("num : ");
    scanf(" %c", &c);
    if (c == '+'){
        printf("%d + %d = %d\n", a, b, a + b);
    }
    else if (c == '-'){
        printf("%d - %d = %d\n", a, b, a - b);
    }
    else if (c == '*'){
        printf("%d * %d = %d\n", a, b, a * b);
    }
    else if (c == '/'){
        printf("%d / %d = %.2f\n", a, b, (float)a / b);
    }
    else if (c == '%'){
        printf("%d %% %d = %d\n", a, b, a % b);
    }
    else{
        printf("잘못된 입력입니다.\n");
    }
    return 0;
}