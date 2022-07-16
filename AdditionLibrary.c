#include "Header.h"
/////////////////////////////////////////////////////
//// Function Name: Addition
//// Description: used to perform addition of two Numbers
//// Input:   Integer Integer
//// Output:  Integer
//// Date:    12/4/2022
//// Author:  kajal Salunkhe
////////////////////////////////////////////////////
int Addition(int iNo1, int iNo2)
{
    if (iNo1 < 0)
    {
        iNo1 = -iNo1;
    }
    if (iNo2 < 0)
    {
        iNo2 = -iNo2;
    }
    int iAns = iNo1 + iNo2;

    return iAns;
}
