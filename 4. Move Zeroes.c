/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

#include<stdio.h>
#include<stdlib.h>

void moveZeroes(int* nums, int numsSize)
{
    int j=0;
    int i;
    
    for(i=0;i<numsSize;i++)
	{
        if(nums[i]!=0)
            nums[j++]=nums[i];
            
    }
    
    for(i=j;i<numsSize;i++)
    {
    	nums[i]=0;
    	
	}
        
}

int main()
{
	int size,i;
    int *array;
    
    printf("Enter size of array:");
    scanf("%d",&size);
    array=(int*)calloc(size,sizeof(int));
    
    for(i = 0; i<size; i++) 
	{
        printf("array[%d]:",i+1);
        scanf("%d",&array[i]);
    }
    
    
	printf("Before function:\n");
	
	for(i=0;i<size;i++)
	{
		printf("%d  ",array[i]);	
	}
	
	moveZeroes(array,size);
	
	printf("\nAfter function:\n");
	
	for(i=0;i<size;i++)
	{
		printf("%d  ",array[i]);	
	}
	
}
