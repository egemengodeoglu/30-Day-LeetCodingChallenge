/*
Question
Given a non-empty array of integers, every element appears twice except for one. Find that single one.
Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,1]
Output: 1
Example 2:

Input: [4,1,2,1,2]
Output: 4

*/



#include <stdio.h>
#include <stdlib.h>
 
int singleNumber(int *,int);
 
int main()
{
    int size;
    int i;
    
    do
	{
    	printf("Enter size of array:");
    	scanf("%d",&size);
    	
	}while(size%2!=1);
	
	int *array = (int*) calloc (size, sizeof(int));
    
    for(i = 0; i<size; i++) 
	{
        printf("array[%d]:",i+1);
        scanf("%d",&array[i]);
    }
 
    int number = singleNumber(array,size);
    printf("%d\n", number);
    system("pause");
    return 0;
}



int singleNumber(int* nums, int numsSize)
{
    int i;
    int val = nums[0];

    for(i=1; i<numsSize; i++)
    {
        
        val = val ^ nums[i];        
        
    }
    
    return val;
}
