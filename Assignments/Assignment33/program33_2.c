#include<stdio.h>
#define TRUE 1
#define FALSE 0
//////////////////////////
//
// Function Name: ChkCapital
// Description: check whether it is capital or not (A-Z).
// INPUT : char
// OUTPUT : char
// Author : Atharva Sanjay More
// Date : 29/11/25
//
//////////////////////////
typedef int bool;
bool ChkCapital(char ch)
{
    bool bFlag = 0;
    if(ch >= 'A' && ch <= 'Z')
    {
        bFlag = 1;
    }
        return bFlag;
        
}
int main()
{
    char cValue = '\0';
    bool bRet = FALSE;
    printf("Enter the character :\n");
    scanf("%c",&cValue);
    bRet = ChkCapital(cValue);
    if(bRet == TRUE)
    {
    printf("It is Capital Character");
    }
    else
    {
    printf("It is not a Capital Character");
    }
    return 0;
}