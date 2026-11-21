#include <stdio.h>

int main()
{
    int n;
    int arr[1000];
    int current = 1, longest = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            current++;
        }
        else
        {
            current = 1;
        }

        if (current > longest)
        {
            longest = current;
        }
    }

    printf("%d", longest);

    return 0;
}