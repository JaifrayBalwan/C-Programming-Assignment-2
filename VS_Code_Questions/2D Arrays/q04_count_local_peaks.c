#include <stdio.h>

int main()
{
    int r, c;
    int arr[100][100];
    int peaks = 0;

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int isPeak = 1;

            // Up
            if (i > 0 && arr[i][j] <= arr[i - 1][j])
            {
                isPeak = 0;
            }

            // Down
            if (i < r - 1 && arr[i][j] <= arr[i + 1][j])
            {
                isPeak = 0;
            }

            // Left
            if (j > 0 && arr[i][j] <= arr[i][j - 1])
            {
                isPeak = 0;
            }

            // Right
            if (j < c - 1 && arr[i][j] <= arr[i][j + 1])
            {
                isPeak = 0;
            }

            if (isPeak == 1)
            {
                peaks++;
            }
        }
    }

    printf("%d", peaks);

    return 0;
}