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
    int anyElement;
    printf("Enter an element");
    scanf("%d", &anyElement);
    for (int i = 0; i < arrLength; i++)
    {
        if (anyElement <= a[i])
        {
            printf("%d ", a[i]);
        }
    }
}