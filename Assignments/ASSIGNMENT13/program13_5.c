#include <stdio.h>
////////////////////////////////////////////////
//
// Function Name: sum_even_numbers
// Description:  Find sum of first N even numbers
// Input: int
// Output : int
// Author :   Atharva Sanjay More
// Date : 3/11/25
//
////////////////////////////////////////////////
int sum_even_numbers(int limit) 
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=1; iCnt<=limit; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt; 
        }
    } 
    return iSum;
}                //Time Complexity = O(n)
int main(void)
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    printf("%d\n", sum_even_numbers(limit));

    return 0;
}