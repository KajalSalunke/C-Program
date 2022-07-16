#include <stdio.h>

// Input : 7856
// Output :4

int CountDigit(int iNo)
{
    int iDigit = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = CountDigit(iValue);

    printf("Number of Digits Are in Numbers  %d", iRet);

    return 0;
}
