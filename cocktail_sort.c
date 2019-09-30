#include<stdio.h>

void swap(int *x,int*y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int findmin(int a[],int beg,int end)
{
	for(int i=beg;i<=end;i++)
	{
		if(a[i] > a[i+1])
		{
			swap(&a[i],&a[i+1]);
		}		
	}
}

int findmax(int a[],int beg,int end)
{
	for(int i=end;i>=0;i--)
	{
		if(a[i] < a[i-1])
		{
			swap(&a[i],&a[i-1]);
		}		
	}
}

void main()
{
	int a[100],n,beg,end,t=0;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	beg=0;
	end=n-1;

	for(int i=0;i < n;i++)
	{
		if(i%2==0)
		{
			findmax(a,beg,end);
			end--;
		}
		else
		{
			findmin(a,beg,end);
			beg++;			
		}
	}

	printf("Array after sorting : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}