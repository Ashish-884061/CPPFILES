#include <stdio.h>
#include <stdlib.h>
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a,int tsize,int usize)
{
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int *)malloc(tsize*sizeof(int));
}

void insertion(int arr[],int size,int element,int capacity,int index)
{
    if(size>=capacity)
    {
        printf("THE ARRAY IS FULL");
    }
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}

void setVal(struct myArray *a)
{
    for(int i=0;i<a->used_size;i++)
    {
        printf("ENTER THE %d ELEMENT\n",i+1);
        scanf("%d",&(a->ptr)[i]);
    }
    printf("\n");
}
void show(struct myArray *a)
{
    printf("THE ELEMENTS OF YOUR ARRAY ARE =\n");
    for(int t=0;t<a->used_size;t++)
    {
        printf("%d\n",(a->ptr)[t]);
    }
}

void printN(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

void deletion(int arr[],int size,int index)
{
    int count = 0; 
    while(count!=index)
    {
        count++;
    }
    for(int j=count;j<=size;j++)
    {
        arr[j]=arr[j+1];
    }
}

int main()
{
    /*struct myArray marks;
    createArray(&marks,20,5);
    setVal(&marks);
    show(&marks);
    show(&marks); */
    int arr[20]={7,8,12,24,44};
    int size = 5;
    printf("ORIGINAL ARRAY =\n");
    printN(arr,size);
    printf("\n");
    printf("ARRAY AFTER INSERTION =\n");
    insertion(arr,size,77,20,2);
    size+=1;
    printN(arr,size);
    printf("\n");
    printf("ARRAY AFTER DELETION =\n");
    deletion(arr,size,2);
    size-=1;
    printN(arr,size);
}