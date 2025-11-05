//////////////////////////
//
// Function Name: PrintEven
// Description:  write a program which accept one number from user and print that number of even numbers on screen.   
// Input: int
// Output : even
// Author : Atharva Sanjay More
// Date : 31/10/25
//
//////////////////////////
#include<stdio.h>

void PrintEven(int iNo)  
{  
 if(iNo <= 0 )  
 {  
  return;  
 }  
 for (int iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iCnt * 2 );
    }
 } 

int main() 
{ 
 int iValue = 0; 
  
 printf("Enter number\n"); 
 scanf("%d",&iValue); 
 PrintEven(iValue); 
 return 0; 
} 
// end of main

//////////////////////////
//
//  Testcase sucessfully handeled by the application 
//  Input : 7
//  Output : 2 4  6  8  10  12  14 
//////////////////////////