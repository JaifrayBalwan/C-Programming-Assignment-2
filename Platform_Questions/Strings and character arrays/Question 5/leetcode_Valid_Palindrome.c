/*
Title: 125. Valid Palindrome
Platform: LeetCode | Language: C | Question - 5
*/
#include <stdbool.h>

static int isAlphaNumeric(char c)
{
    return (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9');
}

static char toLowerAscii(char c)
{
    if (c >= 'A' && c <= 'Z') return (char)(c - 'A' + 'a');
    return c;
}

bool isPalindrome(char* s)
{
    int left = 0, right = 0;
    while (s[right] != '\0') right++;
    right--;

    while (left < right)
    {
        while (left < right && !isAlphaNumeric(s[left])) left++;
        while (left < right && !isAlphaNumeric(s[right])) right--;

        if (toLowerAscii(s[left]) != toLowerAscii(s[right]))
            return false;

        left++;
        right--;
    }
    return true;
}
