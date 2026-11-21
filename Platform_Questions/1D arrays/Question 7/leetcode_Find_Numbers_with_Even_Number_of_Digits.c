/*
Title: 1295. Find Numbers with Even Number of Digits
Platform: LeetCode | Language: C | Question - 7
*/
static int digitCount(int number)
{
    int count = 0;
    do
    {
        count++;
        number /= 10;
    } while (number != 0);
    return count;
}

int findNumbers(int* nums, int numsSize)
{
    int result = 0;
    for (int i = 0; i < numsSize; i++)
        if (digitCount(nums[i]) % 2 == 0)
            result++;
    return result;
}
