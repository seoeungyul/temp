#include <stdio.h>
int main (){
    int a, b; // 정수형 변수 선언
    char c; // 문자형 변수 선언
    printf("num : "); 
    scanf("%d %d", &a, &b); // 두 정수 입력 받기
    printf("+ | - | * | / | %%\n"); 
    printf("num : ");
    scanf(" %c", &c); // 연산자 입력 받기
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