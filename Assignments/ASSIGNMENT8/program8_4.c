#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Table
// Description: accept number from user and display its table.  
// Input: int
// Output :int
// Author : Atharva Sanjay More
// Date : 2/11/25
//
/////////////////////////////////////////////////////////////////////////////////////
void Table(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
    
}               //Time Complexity= O(n)
int main()
{
int iValue = 0;
printf("Enter number");
scanf("%d",&iValue);
Table(iValue);
return 0;
}