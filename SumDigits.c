#include <stdio.h>

// Input : 7856
// Output :
// 6
// 5
// 8
// 7

int SumDigits(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = SumDigits(iValue);

    printf("Sum of digits are : %d\n", iRet);
    return 0;
}
