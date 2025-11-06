#include<stdio.h>
////////////////////////////////////////////////
//
// Function Name: DollarToINR
// Description: Accept amount in US dollar and return its corresponding value in Indian currency Consider 1$ as 70 rupees.
// Input: int
// Output :int
// Author : Atharva Sanjay More
// Date : 2/11/25
//
////////////////////////////////////////////////
int DollarToINR(int iNo)
{
    int iDollar = 70;
    int iRupes = 0;
    {
        iRupes = iNo*iDollar;
        return iRupes;
    }
        //Time Complexity= O(1)
}
int main()
{
int iValue = 0, iRet = 0;
printf("Enter number of USD");
scanf("%d",&iValue);
iRet = DollarToINR(iValue);
printf("Value in INR is %d",iRet);
return 0;
}