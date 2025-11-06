#include <stdio.h>
////////////////////////////////////////////////
//
// Function Name: sum_natural_numbers
// Description:  Find sum of first N natural numbers
// Input: int
// Output : int
// Author :  Atharva Sanjay More
// Date : 3/11/25
//
////////////////////////////////////////////////
int sum_natural_numbers(int limit)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt = 1; iCnt<=limit; iCnt++)
    {
       iSum = iSum + iCnt;
    }
    return iSum;
}                //Time Complexity = O(n)
int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    printf("%d\n", sum_natural_numbers(limit));

    return 0;
}