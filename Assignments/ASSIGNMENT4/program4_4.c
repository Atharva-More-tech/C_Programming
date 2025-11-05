//////////////////////////
//
// Function Name: SumNonFact
// Description:  accept number from user and return summation of all its non factors
// Input: int
// Output : int
// Author : Atharva Sanjay More
// Date : 1/11/25
//
////////////////////////// 
#include<stdio.h> 
int SumNonFact(int iNo) 
{ 
int iCnt =0;
int iSum =0;
if(iNo <=0)
    {
        iNo = -iNo;
    }   
    for(iCnt =1 ; iCnt <= iNo-1 ;iCnt++)
    {
       if((iNo % iCnt)!=0)
        {
           iSum = iSum + iCnt;
        }
    } 
    return iSum;
} 
int main() 
{ 
int iValue = 0; 
int iRet = 0; 
printf("Enter number"); 
scanf("%d",&iValue); 
iRet  = SumNonFact(iValue); 
printf("%d",iRet); 
return 0; 
} 