#include<stdio.h>
//////////////////////////
//
// Function Name: LastChar
// Description: Return index of last occurrence of that character.
// INPUT : char
// OUTPUT : int
// Author : Atharva Sanjay More
// Date : 15/12/25
//
//////////////////////////
int LastChar(char *str, char ch) 

{ 
    int i = 0;
    int iLast = -1;

    while(str[i]!= '\0')
    {
        if(str[i]== ch)
        {
            iLast = i;
        }
        i++;
    } 
    return iLast;
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
iRet = LastChar(arr, cValue); 
printf("Character location is %d",iRet); 
return 0;

}
