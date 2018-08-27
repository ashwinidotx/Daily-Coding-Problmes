/*
Problem Statement:
To count the no of steps to reach a target number starting from 10 by performing only 2 operations:
  1. *3
  2. +2
  3. -1
eg:
33:- Starting from 10, no of opetations= 10*3+2+2-1 =33 Steps: 4
28:- 10*3-1-1 Steps: 3 
*/

#include<stdio.h>

int main()
{
    int num,r,count=0,two;
scanf("%d",&num);
if(num>=30){
while(num>0){


    int three=num/30;
    count=count+three;
    num=num-(30*three);
    
    two=num/2;
    count=count+two;
    num=num-(2*two);
    
    count=count+2;
    num=0;
}
}
else if(num>=24 && num<30)
{   count=1;
    count+=30-num;
}
else if(num>10 && num<24)
{   
    int two=(num-10)/2;
    count=count+two;
    if(num%2!=0)
        count+=2;
    

}
else
{
    count=10-num;
}

printf("%d\n",count);
return 0;
}

