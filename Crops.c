/*
Problem Statement: 
Frfom a given set of  2 strings denoting crops 'P','W','O','R' of 2 different people,
Find if both of them have same number of crops growing.

INPUT: Contains 2 strings
OUTPUT: Displaying if the strings have equal crops.
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i;
    int P1=0, W1=0, O1=0, R1=0;
    int P2=0, W2=0, O2=0, R2=0;
    //int st1[4]={0,0,0,0};
    //int st2[4]={0,0,0,0};
    
    gets(str1);
    gets(str2);
    
    for(i=0;i<strlen(str1);i++)
    {
        if(str1[i]=='P')
            {P1=P1+1;  printf("hi");}
        if(str1[i]=='O')
            O1=O1+1;
        if(str1[i]=='R')
            R1=R1+1;
        if(str1[i]=='W')
            W1=W1+1;
    }
    
    for(i=0;i<strlen(str2);i++)
    {
        if(str2[i]=='P')
            P2++;
        if(str2[i]=='O')
            O2++;
        if(str2[i]=='R')
            R2++;
        if(str2[i]=='W')
            W2++;
    }
    printf("%c",str1[2]);
    printf("\n%d %d %d %d",P1,O1,R1,W1);
    printf("\n%d %d %d %d",P1,O1,R1,W1);
    if(P1!=P2 && O1!=O2 && R1!=R2 && W1!=W2)
        printf("no");
    else
        printf("yes");
    
     
    return 0;
}