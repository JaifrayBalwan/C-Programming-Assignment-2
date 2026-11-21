/*
Title: 387. First Unique Character in a String
Platform: LeetCode | Language: C | Question - 7
*/
int firstUniqChar(char* s)
{
    int frequency[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
        frequency[s[i] - 'a']++;

    for (int i = 0; s[i] != '\0'; i++)
        if (frequency[s[i] - 'a'] == 1)
            return i;

    return -1;
}
