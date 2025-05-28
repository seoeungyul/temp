#include <stdio.h>
int main( ){
    int st = 173, he = 168;
    if (st > he){
        printf("평균 이하");
    }
    else if (st == he){
        printf("평균");
    }
    else{
        printf("평균 이상");
    }
    printf("\n");
    return 0;
}