#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef bool
//////////////////////////
//
// Function Name: ChkSpecial
// Description: check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
// INPUT : int
// OUTPUT : bool
// Author : Atharva Sanjay More
// Date : 2/12/25
//
//////////////////////////
bool ChkSpecial(char ch) 
{ 
    bool bFlag = 0;
    
    if(ch == ! ||ch == @ ||ch == # ||ch == $ ||
    ch == % ||ch == ^ ||ch == & ||ch == * ||)
    {
        bFlag = 1;
    }
        return bFlag;
} 
int main() 
{ 
char cValue = '\0'; 
bool bRet = FALSE; 
printf("Enter the character :"); 
scanf("%c",&cValue); 
bRet = ChkSpecial(cValue); 
if(bRet == TRUE) 
{ 
printf("It is special Character"); 
} 
else 
{ 
printf("It is not a special Character"); 
} 
return 0; 
} 