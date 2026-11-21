/*
Title: 344. Reverse String
Platform: LeetCode | Language: C | Question - 2
*/
void reverseString(char* s, int sSize)
{
    int left = 0, right = sSize - 1;
    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}
