#include <stdio.h> //stdio 호출
int main( ){ 
    int st = 173, he = 168; // 정수 선언 및 초기화
    if (st > he){ // 조건문 ( 대소비교 )
        printf("평균 이하"); // st > he일 때 "평균 이하" 출력
    }
    else if (st == he){ // st와 he가 같을 때( st > he가 아닐 때 )
        printf("평균"); // "평균" 출력
    }
    else{ // st < he일 때
        printf("평균 이상"); // "평균 이상" 출력
    }
    printf("\n"); // 줄바꿈 출력
    return 0;
}