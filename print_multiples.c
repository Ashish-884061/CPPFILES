#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d=1,x=1,count=1;
    printf("ENTER THE NUMBER OF WHICH MULTIPLES ARE TO BE PRINTED\n");
    scanf("%d\n",&a);
    printf("ENTER THE RANGE\n");
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    count = a;
    for(int i=b;i<=c;i++)
    {
        if(a%count==0)
        {
            printf("%d\n",count);
        }
    }
}