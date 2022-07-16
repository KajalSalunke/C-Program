// Input : 4
//  Output : Even Number

// Input : 55
// Output : Odd Number

/*
Algorithm

        START
            Accept number from user as No
            Check whether that number is negative or  not
            If it is negative then convert it to positive

            Create one variable as Sum and set it to 0
            Create one variable as Cnt and set it to 1

            Iterate till Cnt is less than or equal to No
                Add the value of Cnt into the variable Sum
                Inrement the value of Cnt by 1
            Loop

            Display the value of Sum
        END


 */

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
