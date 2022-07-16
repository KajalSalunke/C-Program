// Input : 4
//  Output : 10  (1+2+3+4)

// Input : 5
// Output : 15  (1+2+3+4+5)

// Input : 7
// Output : 28  (1+2+3+4+5+6+7)

/*
Algorithm
    START
    accept number from user


 */

#include <stdio.h>
/////////////////////////////////////////////////////
//// Function Name: Summation
//// Description: used to perform addition till given input number
//// Input:   Integer
//// Output:  Integer
//// Date:    12/4/2022
//// Author:  kajal Salunkhe
////////////////////////////////////////////////////
int Summation(int iNo)
{
    int iCnt = 0;
    int Sum = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        Sum = Sum + iCnt;
    }
    return Sum;
}
int main()
{
    int iValue1, iRet = 0;

    printf("Enter the Number \n");
    scanf("%d", &iValue1);

    iRet = Summation(iValue1);
    printf("Summation is : %d \n", iRet);

    return 0;
}
