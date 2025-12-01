#include<stdio.h>
#define TRUE 1 
#define FALSE 0 

typedef int bool; 
bool ChkDigit(char ch) 
{ 
    bool bFlag = 0;
    if(ch >= 'a' && ch <= 'z')
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
    printf("It is Small case Character"); 
    } 
    else 
    { 
    printf("It is not a Small case Character"); 
    } 
    return 0; 
}