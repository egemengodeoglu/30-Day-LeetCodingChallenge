/*
Question
Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number 
by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or 
it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Example: 

Input: 19
Output: true
Explanation: 
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

*/




#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isHappy(int n)
{
    if(n==1)
    	return true;
    	
    int total;
    
    while(n>=7)
	{
    	total=0;
        do
		{
            total+=(n%10)*(n%10);
            n=n/10;
            
        }while(n!=0);
        
        if(total==1)
            return true;
            
        n=total;
	}
    return false;
}

int main()
{
	int tmp;
	while(1)
	{
		printf("Enter a number:");
		scanf("%d",&tmp);
		
		if(isHappy(tmp))
			printf("%d is a happy number.\n",tmp);
		else
			printf("%d is not a happy number.\n",tmp);
	}

	return 0;
}
