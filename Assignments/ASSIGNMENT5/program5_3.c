#include <stdio.h> 
//////////////////////////
//
// Function Name: CheckLeapYear
// Description: Check Leap Year 
// Input: int
// Output : int
// Author : Atharva Sanjay More
// Date : 1/11/25
//
//////////////////////////
void CheckLeapYear(int year) 
{ 
if( year % 4 ==0)
 {
    printf("its a leap year");
 }
 else
 {
    printf("its not a leap year");
 }
} 
int main() 
{ 
int yr; 
printf("Enter year: "); 
scanf("%d", &yr); 
CheckLeapYear(yr); 
return 0; 
} 