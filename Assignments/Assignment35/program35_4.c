#include<stdio.h>
#define TRUE 1
#define FALSE 0
/////////////////////////
//
// Function Name: ChkVowel
// Description: check whether it contains vowels in it or not.
// INPUT : char
// OUTPUT : bool
// Author : Atharva Sanjay More
// Date : 4/12/25
//
//////////////////////////
typedef int bool;
bool ChkVowel(char *str)
{ 
    int bFlag = 0;
    while(*str != '\0')
    {
        if(*str == 'a' ||*str == 'e' ||*str == 'i' ||*str == 'o' ||*str == 'u' ||
        *str == 'A' ||*str == 'E' ||*str == 'I' ||*str == 'O' ||*str == 'U')
        {
            bFlag = 1;
            break;
        }
            str++;
    }
        return bFlag;
} 
 
int main() 
{ 
    char arr[20]; 
    bool bRet = FALSE; 

    printf("Enter string :"); 
    scanf("%[^'\n']s",arr); 

    bRet = ChkVowel(arr); 

    if(bRet == TRUE) 
    { 
    printf("Contains Vowel"); 
    } 
    else 
    { 
    printf("There is no Vowel"); 
    } 

    return 0;
}