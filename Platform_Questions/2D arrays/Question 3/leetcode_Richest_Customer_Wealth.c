/*
Title: 1672. Richest Customer Wealth
Platform: LeetCode | Language: C | Question - 3
*/
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize)
{
    int richest = 0;
    for (int i = 0; i < accountsSize; i++)
    {
        int wealth = 0;
        for (int j = 0; j < accountsColSize[i]; j++)
            wealth += accounts[i][j];
        if (wealth > richest) richest = wealth;
    }
    return richest;
}
