#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("\n-------------Insertion Sort-------------\n");

    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter elements in the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Logic Of Insertion Sorting
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > temp; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
    

    printf("\nSorted array elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
