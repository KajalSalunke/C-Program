//check even or odd number without using modulus operetaor
#include<stdio.h>
int main()
{
    int num=0;
    printf("Enter Number \n");
    scanf("%d",&num);
    if((num&1)==0)
    
        printf("Even number \n");
    else
          printf("Odd number \n");
    return 0;

}
