#include <iostream>
#include <conio.h>
#include "selectsort.h"
/*
int main()
{
	int arr[8]={34,98,65,23,56,11,9,32};
	select_sort(arr);
	getch();
	return 0;
}
*/
void select_sort(int arr[],int (*fptr)(int,int))
{
	int smallestIndex=0;
	int temp;
	for (int startIndex=0;startIndex<8;startIndex++)
	{		
		for (int currentIndex=startIndex+1;currentIndex<8;currentIndex++)
		{
			if(fptr(arr[smallestIndex],arr[currentIndex]))   
			{
				smallestIndex=currentIndex; 
			}
		}
			temp = arr[startIndex];
			arr[startIndex] = arr[smallestIndex];
			arr[smallestIndex] = temp;
		printarr(arr);
	}
}

int ascending(int x,int y)
{
	return (x>y);	//swap if first number is greater than the second
}

int descending(int x,int y)
{
	return (x<y);	
}

void printarr(int arr[])
{
	for(int i=0;i<8;i++)
	printf("%d  ",arr[i]);
	printf("\n");
}
	
