#include<stdio.h>

int main()
{
	int size,i,j;
	char name[100];
	printf("Enter name: ");
	//scanf("%[\n]s",name);
	for(int i=0;i!='\n';i++)
		scanf("%c",&name[i]);
	
	for(i=0;i!='\0';i++)
		printf("%c",name[i]);
	size= sizeof(name)/sizeof(name[0]);
	char reverse[size];
	

	for (i=0;i<size;i++)
		reverse[i]=name[size-i-1];
	
	printf("\nReverse: ");
	for(i=0;i!='\0';i++)
		printf("%c",reverse[i]);
	
	return 0;
}