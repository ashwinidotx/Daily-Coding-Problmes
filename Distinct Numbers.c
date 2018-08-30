/*
Problem statement:
Given a pair of strings, Find out the number of distinct numbers and display the result.
eg:
I/P: length of the 2 strings and then the strings.
    3 4
    {11,22,33}
    {24,11,54,33}
O/P: the no. of distinct strings
    4
*/

#include<stdio.h>
int main()
{
    int ar1[10],ar2[10];
    int i,j,count=0,dis=0,n1,n2;
    int n;
    printf("Length:");
    scanf("%d %d",&n1,&n2);
   // if (n1>n2)
     //   n=n1;
   // else
     //   n=n2;
     n=n1+n2;
    printf("\nEnter array1:\n");
    for(i=0;i<n1;i++)
        scanf("%d",&ar1[i]);

    printf("\nEnter array2:\n");
    for(i=0;i<n2;i++)
        scanf("%d",&ar2[i]);

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(ar1[i]==ar2[j])
                count++;
            else
                dis++;
        }
    }
    //printf("\n Count: %d\n",count);
    printf("Distinct numners count : %d\n",n-(2*count));

    return 0;
}

// 6p-ms-l2-mod4