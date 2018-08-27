/*
find first missin +ve integer (in linear/constant time)
eg;
1. [3,4,-1,1] ->2 -- [-1,1, 3,4]
2. [1,2,0] -> 3 
*/
#include<stdio.h>
int main()
{
    int array[100],n,i,j,sum=0,arsum=0,ans=0,max;

    printf("Array size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    printf("Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
        if(array[i]>0)
            arsum+=array[i];
        if(array[i]>max)
            max=array[i];
    }
    
    sum=(max*(max+1))/2;

    ans=sum-arsum;

    if(ans!=0)
    printf("Missing number= %d",ans);
    else
    {
        ans=max+1;
        printf("\nMissing number= %d\n",ans);
    }

    return 0;
}