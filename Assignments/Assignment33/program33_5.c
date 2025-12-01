#include<stdio.h>
//////////////////////////
//
// Function Name: ChkCapital
// Description: check whether it is capital or not (A-Z).
// INPUT : int
// OUTPUT : void
// Author : Atharva Sanjay More
// Date : 29/11/25
//
//////////////////////////
void DisplaySchedule(char chDiv) 
{ 
    if(chDiv == 'a' || chDiv == 'A' )
    {
        printf("Your Exam is at 7 AM");
    }
    else if(chDiv == 'b' || chDiv == 'B' )
    {
        printf("Your Exam is at 8.30 AM");
    }
    else if(chDiv == 'c' || chDiv == 'C' )
    {
        printf("Your Exam is at 9.20 AM");
    }
    else if(chDiv == 'd' || chDiv == 'D' )
    {
        printf("Your Exam is at 10.30 AM");
    }
    else
    {
        printf("Invalid Division");
    }
} 
int main() 
{ 
    char cValue = '\0';  
    printf("Enter your division :"); 
    scanf("%c",&cValue); 
    DisplaySchedule(cValue);
    
    return 0; 
}