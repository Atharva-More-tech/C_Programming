//////////////////////////
//
// Function Name: Display
// Description:  Accept one number from user if number is less than 10 then print “Hello” otherwise print “Demo”
// Input: int
// Output :if number is less than 10 = "Hello"
//         if number is greater than 10 ="Demo" 
// Author : Atharva Sanjay More
// Date : 31/10/25
//
//////////////////////////

#include<stdio.h>
void Display ( int iNo)  
{ 
if(iNo < 10)  
{  
printf("Hello");  
} 
else 
{  
printf("Demo");  
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