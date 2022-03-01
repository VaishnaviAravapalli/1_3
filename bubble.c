#include<stdio.h>

#define N 5                                             //macro to define array size

void bubble_sort(int arr[])
{
		int temp;
		for(int i = 0; i < N; i++)                       //loop i to take first element
		{
				for(int j = i+1; j < N; j++)            //loop j to take next adjacent elements
				{
						if(arr[i] > arr[j])                     //condition to check each adjacent elements  
						{
						temp = arr[i];
						arr[i] = arr[j];                       //swapping two elements position if condition is true
						arr[j] = temp;
						}
				}
		}
		printf("Sorted array is : ");
		for(int i = 0; i < N; i++) 
		{ 
		 		printf("%d ", arr[i]);                       //loop to print array elements after sorting
		}
		printf("\n");
}

int main()
{
		int arr[N] = {40, 20, 30, 10, 50};
		printf("Unsorted array is : ");
		for(int i = 0; i < N; i++)
		{
				printf("%d ", arr[i]);                //loop to print array elements before sorting
		}
		printf("\n");
		bubble_sort(arr);  
}
