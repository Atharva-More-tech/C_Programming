#include<stdio.h>
//////////////////////////
//
// Function Name: CountWhite
// Description: accept string from user and  count number of white spaces.
// INPUT : int
// OUTPUT : int
// Author : Atharva Sanjay More
// Date : 29/12/25
//
//////////////////////////
int CountWhite(char *str) 
{ 
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
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
int iRet = 0;

printf("Enter string :"); 
scanf("%[^'\n']s",arr); 

iRet = CountWhite(arr);
printf("%d",iRet); 

return 0;
}