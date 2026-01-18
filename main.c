#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j, i, sonuc, n;

    printf("n i gir ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        sonuc = 1;

        for (j = 1; j <= i; j++)
        {
            sonuc = sonuc * i;
        }
        printf("%d ", sonuc);
    }

    return 0;
}
