/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Follow up:

If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/


#include <stdio.h>
#include <stdlib.h>

int maxSubArray(int* nums, int numsSize)
{
    int max = 0, min = 0,max2=INT_MIN; 
    int i;
  
    for (i=0;i<numsSize;i++)
	{ 
        min=min+nums[i]; 
        
        if(max<min) 
            max=min; 
            
        if(min<0) 
            min=0; 
            
        if(max2<nums[i])
            max2=nums[i];
            
    } 
    
    if(max<=0)
        return max2;
    else
        return max; 
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
 
    int sum = maxSubArray(&array[0],size);
    printf("\n Maximum Subarray: %d\n",sum);
 
    system("pause");
    return 0;
}
