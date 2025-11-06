#include<stdio.h>
////////////////////////////////////////////////
//
// Function Name: KMtoMeter
// Description:  program which accept distance in kilometre and convert it into meter.
// Input: int
// Output :int
// Author : Atharva Sanjay More
// Date : 2/11/25
//
////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iKilo = 1000;
    int iMeter = 0;

    iMeter= iNo*iKilo;

    return iMeter;
}       //Time Complexity= O(1)
int main()
{
int iValue = 0, iRet = 0;
printf("Enter distance");
scanf("%d",&iValue);
iRet = KMtoMeter(iValue);
printf("distince in meter is %d",iRet);
return 0;
}