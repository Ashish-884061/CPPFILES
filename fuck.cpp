#include <bits/stdc++.h>
using namespace std;

int getMaxRepeatingElement(int array[], int n) 
{
    int i, j, maxElement, count;
     int maxCount = 0;
    
    for(i = 0; i< n; i++)   
    {
        count = 1;
        for(j = i+1; j < n; j++)  
        {
            if(array[j] == array[i])
            {
                count++; 
                if(count > maxCount)
                {
                    maxElement = array[j];
                }
            }
        }
    }
    return maxElement;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    int n,count=0;             
    scanf("%d",&n);    
    int array[n]; 
    for(int i=0;i<n;i++)   
    {
        scanf("%d",&array[i]);
    } 
    if(n==1)
    {
        cout<<"0"<<endl;
    }
    else if(n==2 && array[0]!=array[1])
    {
        cout<<"-1"<<endl;
    }
    else
    {
    int maxElement = getMaxRepeatingElement(array, n);      
    
    for(int j = 0 ;j < n;j++)
    {
        if(array[j]==maxElement)
        {
            count++;
        }
    }
    int res = n-count+1;
    cout<<res<<endl;
    }
    }
    return 0;
}
