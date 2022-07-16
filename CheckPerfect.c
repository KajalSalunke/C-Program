// Accept number from user and check number is perfect or not

// Input :      6
// Output :     (1 + 2  +3)

#include <stdio.h>
#include <stdbool.h>
bool ChkPerfect(int iNo)
{
    int iCnt, iSum = 0;
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if (iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue, bRet = 0;

    printf("Enter the Number \n");
    scanf("%d", &iValue);

    bRet = ChkPerfect(iValue);
    if (bRet == true)
    {
        printf("%d is a perfect number\n", iValue);
    }
    else
    {
        printf("%d is not a perfect number\n", iValue);
    }

    return 0;
}
