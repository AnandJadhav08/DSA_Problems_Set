#include <stdio.h>

int main()
{
    int n, k, i, j, temp;

    printf("\n-------------Selection Sort-------------\n");

    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter elements in the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Logic Of Selection Sorting
    for (i = 0; i < n - 1; i++)
    {
        k = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[k])
            {
                k = j;
            }
        }

        if (k != i)
        {
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
    }

    printf("\nSorted array elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
