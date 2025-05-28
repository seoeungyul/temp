#include <stdio.h>
int main( ){
    printf("Birtday :");
    int a, b;
    scanf("%d", &a);
    switch (a){
        case 12:
        case 1:
        case 2: printf("겨울\n"); break;
        case 3:
        case 4:
        case 5: printf("봄\n"); break;
        case 6:
        case 7:
        case 8: printf("여름\n"); break;
        case 9:
        case 10:
        case 11: printf("가을\n"); break;
        default: printf("잘못된 입력입니다.\n");
    }
}