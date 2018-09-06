/*
Problem Statement:
	To find the nth frequent number in a given array.
*/
#include<stdio.h>
int main()
{
    int n, i,j,count=0 ,array[] = {1, 2, 3, 4, 2, 3, 5, 4, 3, 5, 6, 4, 1, 2, 1, 3, 9},counter[100];
    printf("Enter nth freq: ");
    scanf("%d",&n);
    for(i=0;i<100;i++)
        counter[i]=0;
    int size=sizeof(array)/sizeof(array[0]);
    
    for(i=0;i<size;i++)
    {
        counter[array[i]]++;            
    }

    for(i=0;i<100;i++)
    {
        if(counter[i]>0)
            printf("Array %d , count: %d \n", i, counter[i]);
    }            
    int temp,t;
       
    for(i=0;i<100;i++)
    {
        for(j=i+1;j<100;j++)
        {
            if(counter[i]<counter[j])
            {
                temp=counter[i];
                counter[i]=counter[j];
                counter[j]=temp;
                t = j;
                j = i;
                i = t;
            }
            
        }
    printf("\n");
    for(i=1;i<=100;i++)
    {      
        if(i==n)
        {
            printf("Frequency %d for Value  %d", counter[i],i);
        }
    }
    printf("\nEnd.\n");
    return 0;
}
}
