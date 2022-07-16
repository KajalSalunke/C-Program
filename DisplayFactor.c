// Accept number from user and display its factors

// Input :      10
// Output :     1    2   5

// Input :      9
// Output :     1   3

// Input :       17
// Output :      1

// Input :       20
// Output :     1   2   4   5   10

// Input :      -20
// Output :      1     2     4       5       10

#include <stdio.h>
void DisplayFactor(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d \t", iCnt);
        }
    }
}
int main()
{
    int iValue, bRet = 0;

    printf("Enter the Number \n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}
