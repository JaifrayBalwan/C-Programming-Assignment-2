/*
Title: 74. Search a 2D Matrix
Platform: LeetCode | Language: C | Question - 5
*/
#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target)
{
    if (matrixSize == 0 || matrixColSize[0] == 0) return false;

    int rows = matrixSize;
    int cols = matrixColSize[0];
    int left = 0, right = rows * cols - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int value = matrix[mid / cols][mid % cols];

        if (value == target) return true;
        if (value < target) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}
