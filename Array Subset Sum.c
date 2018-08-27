/*
Problem Statement:
Given a list of numbers and a number k, return whether any two numbers from the
list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
*/

#include<stdio.h>

int main()
{
    int array[10],i,j,k;
    printf("Enter size:");
    int n;
    scanf("%d",&n);
    printf("Enter number: ");
    scanf("%d",&k);
    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    
    int flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(array[i]+array[j]==k)
                {
                    printf("True");
                    flag=1;
                    break;
                }
                
            }
        }
    }

    if(flag==0)
    {
        printf("False\n");
    }
    return 0;
}