#include<stdio.h>
#define TRUE 1
#define FALSE 0
//////////////////////////
//
// Function Name: ChkAlpha
// Description: check whether it is alphabet or not (A-Z a-z).
// INPUT : char
// OUTPUT : bool
// Author : Atharva Sanjay More
// Date : 29/11/25
//
//////////////////////////
typedef int bool;
bool ChkAlpha(char ch)
{
        bool bFlag = 0;

        if(ch >= 'A' && ch <= 'Z' ||
        ch >= 'a' && ch <= 'z')
        {
             bFlag =1;;
        }

            return bFlag;
        
}
int main()
{

    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c",&cValue);
    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }
    return 0;
}