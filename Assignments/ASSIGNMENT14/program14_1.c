#include<stdio.h>
////////////////////////////////////////////////
//
// Function Name: DisplayDigit
// Description:  accept number from user and display its digits in reverse order.
// Input: int
// Output : int
// Author : Atharva Sanjay More
// Date : 3/11/25
//
////////////////////////////////////////////////
void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
        while(iNo != 0)
    {
    iDigit = iNo % 10;

    printf("%d\t",iDigit); 
    
    iNo = iNo / 10;
    }
}                    //Time Complexity = O(n)
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    
    return 0;
} 