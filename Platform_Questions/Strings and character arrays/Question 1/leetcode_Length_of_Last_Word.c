/*
Title: 58. Length of Last Word
Platform: LeetCode | Language: C | Question - 1
*/
int lengthOfLastWord(char* s)
{
    int i = 0, lastLength = 0, currentLength = 0;
    while (s[i] != '\0')
    {
        if (s[i] != ' ')
            currentLength++;
        else if (currentLength > 0)
        {
            lastLength = currentLength;
            currentLength = 0;
        }
        i++;
    }
    return currentLength > 0 ? currentLength : lastLength;
}
