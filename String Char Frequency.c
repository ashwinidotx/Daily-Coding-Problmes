/*
Problem statement:
Read a String of input consisting of alphhabets and output their 
frequency in the order they occur.
eg: 
    I/P: aabbbccaad
    O/P: 2a3b2c2a1d

*/
#include<stdio.h>
int main()
{
    char inp[100];
    int i,len,count=1;

    printf("Enter string length:");
    scanf("%d",&len);
    printf("Enter String: ");
    for(i=0;i<len;i++)
        scanf("%c",&inp[i]);
    
    for(i=0;i<len;i++)
    {   int j=i;
        while(inp[j]==inp[j+1] || j+1==len)
        {
            count++;
            j++;
        }
        printf("%d%c",count,inp[i]);
        i = j;
        count = 1;
    }
    printf("\nEnd.\n");
    return 0;
}
