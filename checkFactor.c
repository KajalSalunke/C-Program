
#include <stdio.h>
#include <stdbool.h>

/////////////////////////////////////////////////////
//// Function Name: Chkeven
//// Description: Used to Check whether Given number is Divisible by 3 & 5 Or Not
//// Input:   Integer
//// Output:
//// Date:    12/4/2022
//// Author:  kajal Salunkhe
////////////////////////////////////////////////////
bool Check(int iNo)
{

    if ((iNo % 3) == 0 &&
        (iNo % 5) == 0)

        return true;

    else
        return false;
}
int main()
{
    int iValue, bRet = 0;

    printf("Enter the Number \n");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if (bRet == 1)
        printf(" %d is Divisible by 3 & 5 ", iValue);
    else
        printf(" %d is  Not Divisible by 3 & 5 ", iValue);

    return 0;
}
