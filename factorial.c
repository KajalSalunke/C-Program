// Input : 5
// Output : 120 (1 * 2 * 3 * 4*5)
#include <stdio.h>
int Fact(int iNo1)
{
    int fact = 1;
    for (int iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        fact = fact * iCnt;
    }
    return fact;
}
int main()
{
    auto int iValue1 = 0;
    auto int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue1);

    iRet = Fact(iValue1);

    printf("Result is : %d\n", iRet);

    return 0;
}
