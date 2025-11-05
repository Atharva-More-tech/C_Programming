//////////////////////////
//
// Function Name: FactRev
// Description:accept number from user and display its factors in decreasing order.
// Input: int
// Output : int
// Author : Atharva Sanjay More
// Date : 1/11/25
//
////////////////////////// 
#include<stdio.h> 
void FactRev(int iNo) 
{ 
 int iCnt =0;
    if(iNo <=0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo-1 ; iCnt < iNo ;iCnt--)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }
} 
int main() 
{ 
int iValue = 0;  
printf("Enter number"); 
scanf("%d",&iValue); 
FactRev(iValue); 
return 0; 
} 