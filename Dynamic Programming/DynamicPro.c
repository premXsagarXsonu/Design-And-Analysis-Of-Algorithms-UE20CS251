#include <stdio.h>
#include <stdlib.h>
// #define x 10;
int min(int a, int b)
{
    return (a < b) ? a : b;
}

int BinomialCo(int n, int k)
{

    int c[10][10];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= min(i, k); j++)
        {
            if (j == 0 || j == i)
            {
                c[i][j] = 1;
            }
            else
            {
                c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
            }
        }
    }
    return c[n][k];
}
int main()
{
    printf("%d", BinomialCo(5, 2));
    return 0;
}