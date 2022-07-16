// Accept number from user and display its Non factors

// Input :      10
// Output :     8

// Input :      9
// Output :    4

// Input :       17
// Output :      1

// Input :       20
// Output :      22

// Input :      -20
// Output :     22

#include <stdio.h>
int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue, iRet = 0;

    printf("Enter the Number \n");
    scanf("%d", &iValue);

    iRet = SumFactor(iValue);
    printf("%d", iRet);

    return 0;
}
