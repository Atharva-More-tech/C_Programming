#include<stdio.h>
#define TRUE 1 
#define FALSE 0 
//////////////////////////
//
// Function Name: ChkCapital
// Description: check whether it is capital or not (A-Z).
// INPUT : int
// OUTPUT : bool
// Author : Atharva Sanjay More
// Date : 29/11/25
//
//////////////////////////

typedef int bool; 
bool ChkDigit(char ch) 
{ 
    bool bFlag = 0;
    if(ch >= '0' && ch <= '9')
    {
            bFlag =1;;
    }

        return bFlag;
} 
int main() 
{ 
    char cValue = '\0'; 
    bool bRet = FALSE; 
    printf("Enter the character :"); 
    scanf("%c",&cValue); 
    bRet = ChkDigit(cValue); 
    if(bRet == TRUE) 
    { 
    printf("It is Digit"); 
    } 
    else 
    { 
    printf("It is not a  Digit"); 
    } 
    return 0; 
}