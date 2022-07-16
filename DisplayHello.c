/// WAP to program to Display Hello On screen With Filter
#include <stdio.h>
void Display(int);       // Declaration
void Display(int iValue) // Defination
{
    if (iValue < 0) // Filter
    {
        printf("please enter positive value \n");
        return;
    }

    register int iCnt = 0;
    for (iCnt = 0; iCnt < iValue; ++iCnt)
    {
        printf("Hello \n");
    }
}
int main() // main
{
    auto int iValue1 = 0;
    printf("Enter the Number  \n");
    scanf("%d", &iValue1);

    Display(iValue1);
    return 0;
}