/*
Title: 242. Valid Anagram
Platform: LeetCode | Language: C | Question - 8
*/
#include <stdbool.h>

bool isAnagram(char* s, char* t)
{
    int frequency[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
        frequency[s[i] - 'a']++;

    for (int i = 0; t[i] != '\0'; i++)
        frequency[t[i] - 'a']--;

    for (int i = 0; i < 26; i++)
        if (frequency[i] != 0)
            return false;

    return true;
}
