#include <stdio.h>

void main()
{
    int a[] = {1, 2, 3, 5, 3, 1, 3, 4, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < n; k++)
                {
                    temp = a[k];
                    a[k] = a[k + 1];
                    a[k + 1] = temp;
                }
                // n--;
                j = i + 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

// to remove duplicate elements from an array.
