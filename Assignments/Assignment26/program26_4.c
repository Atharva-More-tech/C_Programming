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
    int iCount = 0;

    iCount = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");

        printf("%d\t", iCount);
        iCount++;
        
        printf("*\t");
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