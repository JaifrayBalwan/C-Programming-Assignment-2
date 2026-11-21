/*
Title: Playing with Characters
Platform: HackerRank | Language: C | Question - 4
*/
#include <stdio.h>

int main(void)
{
    char ch;
    char s[1000];
    char sentence[1000];

    scanf("%c", &ch);
    scanf("%s", s);
    scanf(" %[^\n]", sentence);

    printf("%c\n%s\n%s\n", ch, s, sentence);
    return 0;
}
