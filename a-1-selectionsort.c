#include <stdio.h>

int main() // Ported from https://pythonmania.org/python-program-for-selection-sort/
{
	int n=0,i=0,min_index=0,j=0, temp=0;
	printf("Enter number of elements:\n");
	scanf("%d", &n);
	int arr[n];
	
	for(i = 0;i<n;i++)
	{
		printf("Enter element %d for array:\n", i);
		scanf("%d", (arr+i));
	}
	
	for(i=0;i<n-1; i++)
	{
		min_index = i;
		for(j=i+1;j<n;j++)
		{
			
			// if we have a smaller number, mark it using min_index
			if(*(arr+j) < *(arr+min_index))
			{
				min_index = j;				
			}
		}
		
		// swap
		temp = *(arr+i);
		 *(arr+i) = *(arr+min_index);
		 *(arr+min_index) = temp;
	}
	
	printf("Sorted array:\n");
	for(i = 0;i<n; i++)
		printf("%d ", *(arr+i));
	return 0;
}