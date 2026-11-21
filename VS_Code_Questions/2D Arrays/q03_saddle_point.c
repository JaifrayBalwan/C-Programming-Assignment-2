#include <stdio.h>

int main()
{
    int r, c;
    int arr[100][100];
    int found = 0;

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
            int rowMinimum = 1;
            int columnMaximum = 1;

            // Check if it is minimum in its row
            for (int k = 0; k < c; k++)
            {
                if (arr[i][j] > arr[i][k])
                {
                    rowMinimum = 0;
                    break;
                }
            }

            // Check if it is maximum in its column
            for (int k = 0; k < r; k++)
            {
                if (arr[i][j] < arr[k][j])
                {
                    columnMaximum = 0;
                    break;
                }
            }

            if (rowMinimum == 1 && columnMaximum == 1)
            {
                printf("%d %d %d", i, j, arr[i][j]);
                found = 1;
                break;
            }
        }

        if (found == 1)
        {
            break;
        }
    }

    if (found == 0)
    {
        printf("None");
    }

    return 0;
}