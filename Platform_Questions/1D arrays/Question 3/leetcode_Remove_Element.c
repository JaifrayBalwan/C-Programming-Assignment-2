/*
Title: 27. Remove Element
Platform: LeetCode | Language: C | Question - 3
*/
int removeElement(int* nums, int numsSize, int val)
{
    int write = 0;
    for (int i = 0; i < numsSize; i++)
        if (nums[i] != val)
            nums[write++] = nums[i];
    return write;
}
