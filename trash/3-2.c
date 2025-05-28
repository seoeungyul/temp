#include <stdio.h>
int main( ){
    printf("Birtday :");
    int a, b;
    scanf("%d", &a);
    if (a == 12 || a == 1 || a == 2){
        printf("겨울\n");
    }
    else if (a == 3 || a == 4 || a == 5){
        printf("봄\n");
    }
    else if (a == 6 || a == 7 || a == 8){
        printf("여름\n");
    }
    else if (a == 9 || a == 10 || a == 11){
        printf("가을\n");
    }
    else{
        printf("잘못된 입력입니다.\n");
    }
}