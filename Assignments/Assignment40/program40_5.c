#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: recursive program which display pattern
// Input: int
// Output : void
// Author : Atharva Sanjay More
// Date : 22/12/25
//
///////////////////////////////////////////////////////////////////////////////////
void Display(int iNo) 
{ 
    static char cValue = 'a';

    if (iNo == 0)
    {
        return;
    } 
    Display(iNo -1);
    printf("%c\t",cValue);

    cValue++;
    
} 
int main() 
{ 
int iValue = 0; 

printf("Enter number :"); 
scanf("%d",&iValue); 
Display(iValue); 
return 0; 
}