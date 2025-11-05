//////////////////////////
//
// Function Name: Check
// Description: it weather the no. is divisble by 5
// Input: int
// Output : if true: Divisible by 5
//          if false: not Divisible by 5
// Author : Atharva Sanjay More
// Date : 31/10/25
//
//////////////////////////

#include<stdio.h> 
#include<stdbool.h>
bool Check( int iNo)  
{ 
if((iNo % 5) == 0)  
{  
return true;  
} 
else  
{ 
return false;  
} 
} 
int main() 
{
int iValue = 0; 
bool bRet = false;
printf("Enter number"); 
scanf("%d" ,&iValue); 
bRet = Check(iValue); 
if(bRet == true)  
{  
printf("Divisible by 5");  
} 
else  
{ 
printf("Not Divisible by 5"); 
} 
return 0; 
} 