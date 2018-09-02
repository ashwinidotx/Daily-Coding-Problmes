/*
Printing the following pattern:

1 1 1 2
3 2 2 2
3 3 3 4
5 4 4 4
6 5 5 5
i/p= range (in our case=5)
*/

#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Enter Range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=4;j++)
        {
            if((j==1 && i%2==0)||(j==4 && i%2!=0))
                printf("%d ",i+1);
            else
                printf("%d ",i);
        }
    }

    return 0;
}