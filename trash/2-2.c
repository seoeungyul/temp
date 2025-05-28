#include <stdio.h>
int main( ){
    int a, c;
    char b;
    printf("num : ");
    scanf("%d %c %d", &a, &b, &c);
    if (b == '+'){
        printf("%d + %d = %d\n", a, c, a + c);
    }
    else if (b == '-'){
        printf("%d - %d = %d\n", a, c, a - c);
    }
    else if (b == '*'){
        printf("%d * %d = %d\n", a, c, a * c);
    }
    else if (b == '/'){
        printf("%d / %d = %.2f\n", a, c, (float)a / c);
    }
    else if (b == '%'){
        printf("%d %% %d = %d\n", a, c, a % c);
    }
    else{
        printf("잘못된 입력입니다.\n");
    }
    return 0;
}