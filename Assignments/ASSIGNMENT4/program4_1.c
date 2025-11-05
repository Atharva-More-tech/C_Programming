
//////////////////////////
//
// Function Name: MultFact
// Description:accept number from user and display its multiplication of factors
// Input: int
// Output : int
// Author : Atharva Sanjay More
// Date : 1/11/25
//
////////////////////////// 

#include<stdio.h>
int MultFact(int iNo) 
{ 
    int iCnt = 0;
    int iMulti = 1;
        if(iNo <=0)
        {
            iNo = -iNo;
        }
        for(iCnt = 1 ; iCnt < iNo ; iCnt++)
        {
            if((iNo % iCnt)==0)
            {
                iMulti = iMulti * iCnt;
            }
        }
        return iMulti;
} 
int main() 
{ 
int iValue = 0; 
int iRet = 0; 

printf("Enter number"); 
scanf("%d",&iValue); 

iRet = MultFact(iValue); 
printf("%d",iRet); 

return 0; 
} 