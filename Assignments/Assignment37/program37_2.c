#include<stdio.h>
//////////////////////////
//
// Function Name: CountChar
// Description: Return frequency of that character.
// INPUT : char
// OUTPUT : int
// Author : Atharva Sanjay More
// Date : 15/12/25
//
//////////////////////////
int CountChar(char *str, char ch)
{ 
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
           iCnt++;
        }
        str++;
    } 
        return iCnt;
} 
int main() 
{ 
char arr[20]; 
char cValue; 
int iRet = 0; 
printf("Enter string :"); 
scanf("%[^\n]s",arr); 
printf("Enter the character :"); 
scanf(" %c",&cValue); 
iRet = CountChar(arr, cValue); 
printf("Character frequency is %d",iRet); 
return 0; 

} 
