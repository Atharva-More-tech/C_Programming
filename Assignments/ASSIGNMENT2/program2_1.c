//////////////////////////
//
// Function Name: Display
// Description: Accept one number from user and print that number of * on screen. 
// Input: int
// Output : *
// Author : Atharva Sanjay More
// Date : 31/10/25
//
//////////////////////////
#include<stdio.h>

void Display(int iNo)  
{ 
int iCnt = 0;   

if (iNo < 0)
{
    iNo = -iNo;
}
while( iCnt < iNo )  
{ 
printf("*");  
iCnt++ ;  
}  
}  
int main() 
{ 
int iValue = 0; 
printf("Enter number"); 
scanf("%d" ,&iValue);

Display(iValue); 

return 0;
} 