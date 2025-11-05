//////////////////////////
//
// Function Name: NonFact
// Description: accept number from user and return summation of all its non factors
// Input: int
// Output : int
// Author : Atharva Sanjay More
// Date : 1/11/25
//
////////////////////////// 
#include<stdio.h> 
void NonFact(int iNo) 
{ 
int iCnt =0;
if(iNo <=0)
    {
        iNo = -iNo;
    }   
    for(iCnt =1 ; iCnt <= iNo-1 ;iCnt++)
    {
        if((iNo % iCnt)!=0)
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
    NonFact(iValue); 
    return 0; 
} 