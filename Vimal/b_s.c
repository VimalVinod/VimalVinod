#include<stdio.h>
int sort(int arr[],int limit)
{
int temp;
for(int i=0;i<limit;i++)
{
	for(int j=i+1;j<limit-1;j++)
	{
	if(arr[i]>arr[j])
	{
	temp=arr[j];
	arr[j]=arr[i];
	arr[i]=temp;
	}
	}
	
}
}
int b_s(int arr[],int limit,int key)
{
int mid;
for(int i=0;i<limit;i++)
mid=(i+limit)/2;
if(mid==key)
{
return -1;
}
else if (mid>key)
{
mid-1;
}
else if (mid<key)
{
mid+1;
}

}


	void main()
	{
	int limit,key;
	printf("Enter the limit of array: ");
	scanf("%d",&limit);
	int arr[limit];
	printf("Enter the %d array elements: ",limit);
		for(int i=0;i<limit;i++)
		{
		scanf("%d",&arr[i]);
		}
		
	sort(arr,limit);
	printf("Enter the search element: ");
	scanf("%d",&key);
	
	int result=b_s(arr,limit,key);
	if (result==-1)
	{
	printf("%dis found in this array",key);

	}
	else{
	printf("%d is not found in this array",key);
	}
	}
