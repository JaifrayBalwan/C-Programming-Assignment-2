/*
Title: 1351. Count Negative Numbers in a Sorted Matrix
Platform: LeetCode | Language: C | Question - 4
*/
int countNegatives(int** grid, int gridSize, int* gridColSize)
{
    int count = 0;
    for (int i = 0; i < gridSize; i++)
        for (int j = 0; j < gridColSize[i]; j++)
            if (grid[i][j] < 0)
                count++;
    return count;
}
