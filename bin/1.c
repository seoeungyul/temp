#include <stdio.h>
int main( ){
    int st = 173, he = 168; // 정수형 변수 선언 및 변수 할당
    if (st > he){ // 조건문 활용 변수 대소비교
        printf("평균 이하");
    }
    else if (st == he){ 
        printf("평균");
    }
    else{
        printf("평균 이상");
    }
    printf("\n"); 
    return 0; // 프로그램 종료
}