#include<stdio.h>
int main()
{
    int Num,temp,digit,rev=0,sum=0;
    printf("Enter Number \t");
    scanf("%d",&Num);
 while(1)
    {
    temp=Num;
    rev=0;
    while(temp!=0)
    {
        
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
        
    }
        if(Num==rev)
        {
            printf("\n palindrome is \t%d and no is \t%d",rev,sum);
            break; 
        }
        else
        {
            printf("%d\n",Num);
            printf("+%d \n",rev);
            printf("-------------\n");
             Num=Num+rev;
            printf("%d\n",Num);
             printf("-------------\n");
             sum++;
            

        }
    }

    return 0;
}