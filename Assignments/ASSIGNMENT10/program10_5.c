#include<stdio.h>
////////////////////////////////////////////////
//
// Function Name: SquareMeter
// Description:  accept area in square feet and convert it into square meter.
// Input: double
// Output :double
// Author : Atharva Sanjay More
// Date : 2/11/25
//
////////////////////////////////////////////////
double SquareMeter(int iValue)
{
    double iSqfeet = 0.0929;
    double iSqmeter = 0.0;

    iSqmeter = iValue * iSqfeet;

    return iSqmeter;
}       //Time Complexity= O(1)
int main()
{
int iValue = 0;
double dRet = 0.0;
printf("Enter area in square feet");
scanf("%d",&iValue);
dRet = SquareMeter(iValue);
printf("Area in square meter is %lf",dRet);
return 0;
}