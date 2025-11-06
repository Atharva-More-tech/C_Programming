#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: TableRev
// Description: accept number from user and display its table in reverse order..  
// Input: int
// Output :int
// Author : Atharva Sanjay More
// Date : 2/11/25
//
/////////////////////////////////////////////////////////////////////////////////////
void TableRev(int iNo)
{
int iCnt =0;
if(iNo == 0)
{
    iNo = -iNo;
} 
for(iCnt = 10; iCnt >= 1; iCnt--)
{
    printf("%d\t",iCnt*iNo);
}
}       //Time Complexity= O(n)
int main()
{
int iValue = 0;
printf("Enter number");
scanf("%d",&iValue);
TableRev(iValue);
return 0;
}