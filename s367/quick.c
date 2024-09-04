#include<stdio.h>

int quick(int arr[],int limit)
{
int i,j ,mid,low,high,pivot,temp;
for(int i=0;i<limit;i++)
mid=(i+limit)/2;
pivot=mid;
for(int i=0;i<limit;i++)
{
for(int j=mid+1;j<limit-1;j++){
	if(arr[i]>pivot)
	{
	temp=arr[j];
	arr[j]=arr[i];
	arr[i]=temp;
	}
	else{
	j=mid-1;
	temp=arr[j];
	arr[j]=arr[i];
	arr[i]=temp;
	}
	

}
for(int i=0;i<limit;i++){
	printf("%d",arr[i]);}
}

}


	void main()
	{
	int limit;
	printf("Enter the limit of array: ");
	scanf("%d",&limit);
	int arr[limit];
	printf("Enter the %d array elements: ",limit);
		for(int i=0;i<limit;i++)
		{
		scanf("%d",&arr[i]);
		}
		
	quick(arr,limit);
	
	}
