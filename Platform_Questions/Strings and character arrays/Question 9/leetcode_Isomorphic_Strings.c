/*
Title: 205. Isomorphic Strings
Platform: LeetCode | Language: C | Question - 9
*/
#include <stdbool.h>

bool isIsomorphic(char* s, char* t)
{
    int mapST[256], mapTS[256];
    for (int i = 0; i < 256; i++)
    {
        mapST[i] = -1;
        mapTS[i] = -1;
    }

    for (int i = 0; s[i] != '\0' && t[i] != '\0'; i++)
    {
        unsigned char a = (unsigned char)s[i];
        unsigned char b = (unsigned char)t[i];

        if (mapST[a] == -1 && mapTS[b] == -1)
        {
            mapST[a] = b;
            mapTS[b] = a;
        }
        else if (mapST[a] != b || mapTS[b] != a)
            return false;
    }

    return true;
}
