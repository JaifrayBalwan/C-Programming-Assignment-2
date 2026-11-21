#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int arr[1000];
    int minDifference;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    minDifference = abs(arr[0] - arr[1]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int difference = abs(arr[i] - arr[j]);

            if (difference < minDifference)
            {
                minDifference = difference;
            }
        }
    }

    printf("%d", minDifference);

    return 0;
}