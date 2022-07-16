#include <stdio.h>
#include <stdbool.h>

bool Palindrome(int iNo)
{
    int iTemp = 0;
    int iRev = 0;
    int iDigit = 0;
    iTemp = iNo;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }
    if (iRev == iTemp)
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
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = Palindrome(iValue);
    if (iRet == 1)
    {
        printf("number is palindrome ");
    }
    else
    {
        printf(" number is not palindrome ");
    }
    return 0;
}