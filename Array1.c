#include <stdio.h>
void main()
{
    int arrLength;
    printf("Enter the size of array:");
    scanf("%d", &arrLength);
    int a[arrLength];
    printf("\nEnter the elements\n");
    for (int i = 0; i < arrLength; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < arrLength; i++)
    {

        for (int j = i + 1; j < arrLength; j++)
        {

            if (a[i] == a[j])
            {
                printf("%d ", a[j]);
            }
        }
    }
    
}