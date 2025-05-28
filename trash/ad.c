#include <stdio.h>
int main() {
    printf("과목\n");
    printf("값 : ");
    int k;
    scanf("%d", &k);
    if (k < 0 || k > 100){
        if(k >= 90)
        {
            printf("A");
        }
        else if(k >= 80)
        {
            printf("B");
        }
        else if(k >= 70)
        {
            printf("C");
        }
        else if(k >= 60)
        {
            printf("D");
        }
        else
        {
            printf("F");
        }
        return 0;
    }
}