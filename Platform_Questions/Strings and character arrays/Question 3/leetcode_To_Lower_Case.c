/*
Title: 709. To Lower Case
Platform: LeetCode | Language: C | Question - 3
*/
char* toLowerCase(char* s)
{
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (char)(s[i] - 'A' + 'a');
    return s;
}
