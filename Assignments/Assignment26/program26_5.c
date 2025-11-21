#include<stdio.h>
//////////////////////////
//
// Function Name: Pattern
// Description: display pattern.
// INPUT : void
// OUTPUT : void
// Author : Atharva Sanjay More
// Date : 21/11/25
//
//////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
            printf("%d\t",iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}