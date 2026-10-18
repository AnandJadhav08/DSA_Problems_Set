#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\n------------- Binary Search -------------\n");

    int n, i, key;

    printf("\nhow many element are you enter in array : ");
    scanf("%d", &n);

    int low = 0;
    int high = n - 1;
    int arr[n];

    printf("\nenter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the Key for Searching Purposes : ");
    scanf("%d", &key);

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (key == arr[mid])
        {
            printf("\nKey is Found");
            break;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
    }
    if (low > high)
    {
        printf("\n %d element is not found in Array ", key);
    }
    return 0;
}
