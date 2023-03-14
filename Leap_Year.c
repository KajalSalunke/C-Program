//program for finding leap year
#include<stdio.h>
int main()
{
    int Year;
    printf("Enter Year  \n");
    scanf("%d",&Year);
    if( (Year%400==0)||(Year%4==0)&&(Year%100!=0))
         printf("%d is Leap Year ",Year);
    else
        printf("%d is Not Leap Year",Year);
    return 0;

}
