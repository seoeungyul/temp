#include <stdio.h>
int  main( ){
    float h, w, a;
    printf("Enter height in cm: ");
    scanf("%f %f", &h, &w);
    a = w / (h * h / 10000); // w = 몸무게, h = 키
    if (a < 18.5) {
        printf("멸치\n");
    } else if (a < 25) {
        printf("사람\n");
    } else if (a < 30) {
        printf("일반인\n");
    } else {
        printf("피그\n");
        return 0;
    }
}