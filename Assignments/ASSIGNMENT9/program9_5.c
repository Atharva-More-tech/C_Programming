#include<stdio.h>
////////////////////////////////////////////////
//
// Function Name: FactorialDiff
// Description: difference between Even factorial and odd factorial of given number.  
// Input: int
// Output :int
// Author : Atharva Sanjay More
// Date : 2/11/25
//
////////////////////////////////////////////////
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFac1 = 1;
    int iFac2 = 1;
    int iDiff = 0;
    
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFac1 = iFac1*iCnt;
        }
    }
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFac2 = iFac2*iCnt;
        }
    }
    iDiff = iFac1-iFac2;

    return iDiff;

}           //Time Complexity= O(2n/2)
int main()
{
int iValue = 0,iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = FactorialDiff(iValue);
printf("Factorial difference is %d",iRet);
return 0;
}