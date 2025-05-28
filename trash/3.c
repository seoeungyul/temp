#include <stdio.h>
int main( ){
    int sc;
    char g;
    puts("j");
    printf("> ");
    scanf("%d", &sc);
    switch (sc /10){
        case 10:
        case 9: g = 'A'; break;
        case 8: g = 'B'; break;
        case 7: g = 'C'; break;
        case 6: g = 'D'; break;
        default: g = 'F';
    }
    printf("fuck %c\n", g);
    return 0;
}