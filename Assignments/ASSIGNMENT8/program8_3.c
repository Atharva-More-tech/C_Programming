#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Factorial
// Description: finds factorial of given number  
// Input: int
// Output :int
// Author : Atharva Sanjay More
// Date : 2/11/25
//
/////////////////////////////////////////////////////////////////////////////////////
int Factorial(int iNo)
{
    int iCnt = 0;
    int iFac = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt =1 ; iCnt <= iNo ; iCnt++)
    {
        iFac= iFac * iCnt;
    }
    return iFac;
}               //Time Complexity= O(n/2)
int main()
{
int iValue = 0,iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = Factorial(iValue);
printf("Factorial of number is %d",iRet);
return 0;
}