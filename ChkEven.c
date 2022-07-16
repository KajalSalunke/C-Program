
#include <stdio.h>
#include <stdbool.h>

/////////////////////////////////////////////////////
//// Function Name: Chkeven
//// Description: Used to Check whether Given number is Even or Not
//// Input:   Integer
//// Output:  True or False
//// Date:    12/4/2022
//// Author:  kajal Salunkhe
////////////////////////////////////////////////////
bool ChkEven(int iNo)
{

    if ((iNo % 2) == 0)

        return true;

    else
        return false;
}
int main()
{
    int iValue, bRet = 0;

    printf("Enter the Number \n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if (bRet == 1)
        printf(" %d is Even umber ", iValue);
    else
        printf(" %d is Odd Number ", iValue);

    return 0;
}
