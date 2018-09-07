#include<stdio.h>

void prime(int num)
{
	int count=0,i;
	if(num==2 || num%2==0)
		{
			printf("Not a Prime\n");
			return;
		}
	else
	{
		for(i=1;i<num/2;i++)
		{
			if(num%i==0)
				count++;
		}
	}
	if(count==1)
		printf("Prime\n");
	else
		printf("Not Prime\n");

}

int main()
{
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);
	prime(num);
	
	return 0;
}