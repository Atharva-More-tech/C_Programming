#include <stdio.h>
////////////////////////////////////////////////
//
// Function Name: print_numbers
// Description:  Print all numbers from 1 to N
// Input: int
// Output : int
// Author :Atharva Sanjay More
// Date : 2/11/25
//
////////////////////////////////////////////////
void print_numbers(int limit)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=limit; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}       //Time Complexity= O(n)
int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    print_numbers(limit);

    return 0;
}
