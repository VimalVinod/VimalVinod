#include<stdio.h>

int search(int arr[],int limit,int key)
{
	for(int i=0;i<limit;i++)
	{
	if(arr[i]==key)
	{
	return -1;
	}
	}
}

void main()
{
int i,limit,key;
printf("Enter the limit of array:");
scanf("%d",&limit);
int arr[limit];
printf("Enter the %d array elements:",limit);
	for(i=0;i<limit;i++)
	{
	scanf("%d",&arr[i]);
	}
printf("Enter the Search elements:");
scanf("%d",&key);

int result=search(arr,limit,key);
	if (result==-1)
	{
	printf("%dis found in this array",key);

	}
	else{
	printf("%d is not found in this array",key);
	}
}



