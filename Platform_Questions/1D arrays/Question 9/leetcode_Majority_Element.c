/*
Title: 169. Majority Element
Platform: LeetCode | Language: C | Question - 9
*/
int majorityElement(int* nums, int numsSize)
{
    int candidate = 0, votes = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (votes == 0) candidate = nums[i];
        votes += (nums[i] == candidate) ? 1 : -1;
    }
    return candidate;
}
