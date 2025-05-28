#include <stdio.h>
int main() {
    printf("과목평균 계?산?기\n");
    printf("값 : ");
    int k, m, e;
    float t;
    scanf("%d %d %d", &k, &m, &e);
    t = (k + m + e) / 3.0;
    if(k + m + e <= 300)
    {
        if (t >= 70)
        {
        printf("사람이네 %.1f 정도면\n", t);
        }
        else
        {
            printf("사람아니네 %.1f이 어떻게 사람점수임?\n", t);
        }
    }
    else{
        printf("구라치지마 ㅅㅂ아\n");
    }
    return 0;
}