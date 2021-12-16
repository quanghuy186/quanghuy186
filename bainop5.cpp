#include<stdio.h>

int main()
{
    int N, m, S;
    printf("N = ");
    scanf("%d", &N);
    S = 0;
    m = 0;
    do
    {
        m += 1;
        S += m;
    }while(S + m + 1 < N);
    printf("m lon nhat = %d", m);
    return 0;
}
