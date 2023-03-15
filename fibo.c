//fibonacci series
#include<stdio.h>
int main()
{
    int n=0,count=0,a=0,b=1,c=0;
    printf("Enter terms do you want print \n");
    scanf("%d",&n);
    while(count<n)
    {
        c=a+b;
        printf("%d \t",c);
        a=b;
        b=c;
        count++;
    }
    return 0;
}