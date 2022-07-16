#include <stdio.h>

// Input : 7856
// Output :
// 7
// 8
// 5
// 6

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (int iCnt = 1; iNo != 0; iCnt++)
    {
        iDigit = iNo % 10;
        printf("%d \t", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}
