/*
Q. Given an array, return a new array such that at each index i of 
the new array such that the new array is the product of all numbers
in the original array except the one at index i.
eg:
[1,2,3,4,5] -> [120,60,40,30,24].
[3,2,1] -> [2,3,6].
*/
#include<stdio.h>

int main()
{
    int array[20],prodArr[20],i,j,sum,n;

    printf("Array size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
        prodArr[i]=1;
    }
    printf("\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                prodArr[i]= prodArr[i]*array[j];
            }
        }
    }
    printf("Product Array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",prodArr[i]);
        
    }
    printf("\n");

    return 0;
}