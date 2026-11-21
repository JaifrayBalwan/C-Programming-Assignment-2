/*
Title: Left Rotate an Array
Platform: HackerEarth | Language: C | Question - 8

Standalone VS Code program.
Input: n k, followed by n integers.
Output: Array after k left rotations.
*/
#include <stdio.h>

int main(void)
{
    int n, k;
    if (scanf("%d %d", &n, &k) != 2 || n <= 0)
        return 0;

    int a[100000];
    if (n > 100000) return 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    k %= n;
    for (int i = 0; i < n; i++)
    {
        if (i) printf(" ");
        printf("%d", a[(i + k) % n]);
    }
    printf("\n");
    return 0;
}
