#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
    char arr[3],ar[2],res;
    int a = 100;
    scanf("%c %c %c",&arr[0],&arr[1],&arr[2]);
    scanf("%c %c",&ar[0],&ar[1]);
    
    for(int i = 0 ; i<2 ; i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[i]==arr[j] && j<a)
            {
                a=j;
                res=arr[j];
            }
        }
    }
    printf("%c",arr[a]);
    }
 return 0;
}
