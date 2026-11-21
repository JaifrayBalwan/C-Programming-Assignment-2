/*
Title: 217. Contains Duplicate
Platform: LeetCode | Language: C | Question - 6
*/
#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++)
        for (int j = i + 1; j < numsSize; j++)
            if (nums[i] == nums[j])
                return true;
    return false;
}
