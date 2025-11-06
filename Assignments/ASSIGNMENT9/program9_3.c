#include<stdio.h>
////////////////////////////////////////////////
//
// Function Name: EvenFactorial
// Description: find even factorial of given number.
// Input: int
// Output :int
// Author : Atharva Sanjay More
// Date : 2/11/25
//
////////////////////////////////////////////////
int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFac = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
       if(iCnt % 2 == 0)
       {
         iFac=iFac*iCnt;
       }
    }
    return iFac;
}             //Time Complexity= O(n/2)
int main()
{
int iValue = 0,iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = EvenFactorial(iValue);
printf("Even Factorial of number is %d",iRet);
return 0;
}