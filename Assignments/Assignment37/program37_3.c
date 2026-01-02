#include<stdio.h>
//////////////////////////
//
// Function Name: FirstChar
// Description: Return index of first occurrence of that character.
// INPUT : char
// OUTPUT : int
// Author : Atharva Sanjay More
// Date : 15/12/25
//
//////////////////////////
int FirstChar(char *str, char ch) 

{ 
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return i;
        }
        i++;
    } 
    return -1;
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
iRet = FirstChar(arr, cValue); 
printf("Character location is %d",iRet); 
return 0;

}
