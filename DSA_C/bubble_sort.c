#include <stdio.h>

int main()
{
    int n, i, j, temp;
    printf("\n-------------Bubble Sort Algorithm-------------\n");
    printf("\nEnter the how many elements are enter in Array : ");
    scanf("%d", &n);

    int arr[n];
    printf("\n Enter Elements in Array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n Sorted Elements :");
    for(j = 0; j < n; j++){
        printf("%d ",arr[j]);
    }
        return 0;
}