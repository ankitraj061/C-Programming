
#include <stdio.h>
void main()
{

    int a[7] = {2, 4, 5, 6};
    int b[4] = {5, 8, 9, 2, 2, 4, 5};
    int c[15];
    int d[15];

    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 6; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    printf("\n");
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 6; j++)
        {
            if (a[i] != b[j])
            {
                printf("%d ", b[j]);
                break;
            }
        }
    }
}