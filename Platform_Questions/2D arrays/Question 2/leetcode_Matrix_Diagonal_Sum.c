/*
Title: 1572. Matrix Diagonal Sum
Platform: LeetCode | Language: C | Question - 2
*/
int diagonalSum(int** mat, int matSize, int* matColSize)
{
    int sum = 0;
    for (int i = 0; i < matSize; i++)
    {
        sum += mat[i][i];
        if (i != matSize - 1 - i)
            sum += mat[i][matSize - 1 - i];
    }
    return sum;
}
