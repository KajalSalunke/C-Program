#include "Header.h"
int Addition(int, int);
int main()
{
    int iValue1, iValue2, iRet = 0;
    printf("Enter the First integer \n");
    scanf("%d", &iValue1);

    printf("Enter the Second Integer \n");
    scanf("%d", &iValue2);

    iRet = Addition(iValue1, iValue2);
    printf("Addition is : %d \n", iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////
//
//  Input :         11      10
//  Output :       21
//
////////////////////////////////////////////////////////////////////